import socket
import sys
import math

def bytes_needed(n):
    if type(n) is str:
        return len(n)
    elif type(n) is list:
        if type(n[0]) is int:
            return 4 * len(n)
    if n == 0:
        return 1
    return int(math.log(n, 256)) + 1

class Communication:

    def __init__(self, address, port):
        self.port = port
        self.address = address
        # Create the socket used to send data.
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    def send(self, data):
        print("sending: ", data)
        self.sock.sendall(data)

    def recv(self):
        pass

    def connect(self):
        # Initialize the connection to the server.
        self.sock.connect((self.address, self.port))

        # Send an inquiry to the server to see if it exists.
        self.send(bytes([5]))

        # Wait for the server to send back an ACK.
        if self.sock.recv(1) != b'\x06' :
            print("connection hand-shake failed")
        else :
            print("connected")
        
    def disconnect(self):
        self.sock.close()

    def pack(self, cid, args):
            # magic number "-1" is becaues the protocal starts at 1 rather than 0
        # Create the first byte that will contain the cid and
        # number of arguments.
        header = bytes([((cid << 4) & 0xff) | ((((len(args)-1) << 4) & 0xff) >> 4)]) 
        data = header

        # This appends the length of the various args to the data to be sent.
        # The bytesneeded function handles different types.
        for arg in args:
            data += bytes([bytes_needed(arg)-1])

        # This appends the actual data after the lengths are added.
        for arg in args:
            if type(arg) is str:
                data += bytearray(arg, encoding = 'ascii')
            elif type(arg) is int:
                data += arg.to_bytes(bytes_needed(arg), byteorder = 'big')
            elif type(arg) is list:
                for element in arg :
                    data += element.to_bytes(4, byteorder = 'little')

        self.send(data)

lol = Communication('127.0.0.1', 3333)
lol.connect()

lol.pack(0,[[0,0,10,0xff]])
lol.pack(0,[[0,0,10,0x100]])
lol.pack(0,[[0,0,10,0xffff]])
lol.pack(0,[[0,0,10,0x10000]])
lol.pack(1, [0xff00ff00]);
lol.disconnect()
