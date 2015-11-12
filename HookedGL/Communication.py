import socket
import sys
import math

def bytes_needed(n):
    if type(n) is str:
        return len(n)
    if n == 0:
        return 1
    return int(math.log(n, 256)) + 1

class Communication:

    def __init__(self, address, port):
        self.port = port
        self.address = address
        # Create the socket used to send data.
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        # Bind the socket to the server and address.
        self.sock.bind(('localhost', port))

    def send(self, data):
        self.sock.sendall(data)

    def recv(self):
        pass

    def connect(self):
        # Initialize the connection to the server.
        self.sock.connect((self.address, self.port))

        # Send an inquiry to the server to see if it exists.
        self.sock.sendall(chr(5))

        # Set the timeout so the program doesn't hang forever.
        self.sock.settimeout(5)

        # To catch timeout errors.
        try:
            
            # Accept incoming connections.
            connection, inc_address = self.sock.accept()

            # If it is from the server, we return true.
            if inc_address == self.address:
                return true

        # Return false if we timeout.
        except socket.timeout:
            return false

    def disconnect(self):
        self.sock.close()

    def ship(self, cid, args):
        # Create the first byte that will contain the cid and
        # number of arguments.
        header = bytes([((cid << 4) & 0xff) | (((len(args) << 4) & 0xff) >> 4)]) 
        data = header

        # This appends the length of the various args to the data to be sent.
        # The bytesneeded function handles different types.
        for arg in args:
            data += bytes([bytes_needed(arg)])

        # This appends the actual data after the lengths are added.
        for arg in args:
            if type(arg) is str:
                data += bytearray(arg, encoding = 'ascii')
            elif type(arg) is int:
                data += arg.to_bytes(bytes_needed(arg), byteorder = 'big')
       
        # Send the data after packing.
        self.send(data)

lol = Communication('10.221.81.230', 27015)

lol.connect()
