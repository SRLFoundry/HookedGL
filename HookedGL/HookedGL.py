##################
# Font Constants #
##################
SANS = 0;
PAPYRUS = 1;


class HookedGL:
    def __init__(self, address, port):
        from Communication import Communication
        self.address = address
        self.port = port
        self.comms = Communication(address, port)
        self.comms.connect()

    # r, g, and b are ints from 0 to 255.
    # 1 Byte * 3 = 3 Bytes.
    def setColor(self, r, g, b, a):
        return self.comms.pack(1, [((r % 256) << 24) + ((g % 256) << 16) + ((b % 256) << 8) + ((a % 256))])

    # size is an int from 0 to 255.
    # 1 Byte.
    def setPenSize(self, size):
        pass

    # points is an array of at least 4 integers, each 2 Bytes.
    # 2 Bytes * at least 4 = at least 8 Bytes.
    def drawLines(self, points):
        arr = []
        lastPoint = []
        for i in points :
            line = lastPoint
            for k in i :
                line.append(k)
            if(len(line) == 4) :
                for j in line:
                    arr.append(j)
            lastPoint = i
        if len(arr) % 4 == 0 :
            return self.comms.pack(0, [arr])

    # points is an array of at least 4 integers, each 2 Bytes.
    # 2 Bytes * at least 4 = at least 8 Bytes.
    def drawPoly(self, points):
        pass

    # point1 and point 2 are pairs of integers, each 4 Bytes. fill is a
    # boolean 1 Byte in size.
    # 4 Bytes * 2 = 8 Bytes + 1 Byte = 9 Bytes.
    def drawRectangle(self, point1, point2, fill):
        pass

    # point is a pair of integer 2 Bytes each. radius is an integer
    # 1 Byte in size.
    # 4 Bytes + 1 Byte = 5 Bytes.
    def drawCircle(self, point, radius):
        pass

    # font is an int ranging from 0 to 255, 1 Bytes in size.
    # 1 Byte.
    def setFont(self, font):
        pass

    # point is a pair of integer 2 Bytes each. String is at least 1 Byte
    # times the number of characters.
    # 4 Bytes + 1 Byte * length of string = at least 5 Bytes.    
    def text(self, point, string):
        pass

    def __del__(self) :
        self.comms.disconnect()
