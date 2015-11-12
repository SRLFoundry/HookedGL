from Constants import *
from Communication import Communication

class HookedGL:
    def __init__(self, address, port):
        self.address = address
        self.port = port

        self.comm = Communication(address, port)

    def setup(self):
        if not self.comm.connect():
            return False
        return True

    
    # Sets the color that abjects are drawn with.
    #
    # r, g, and b are ints from 0 to 255.
    # 1 Byte * 3 = 3 Bytes.
    def setColor(self, r, g, b):
        self.comm.ship(SET_COLOR, [r, g, b])

    # Sets the pen size for lines.
    #
    # size is an int from 0 to 255.
    # 1 Byte.
    def setPenSize(self, size):
        self.comm.ship(SET_PEN_SIZE)

    # Draws lines. Takes at least two of points.
    #
    # points is an array of at least 4 integers, each 2 Bytes.
    # 2 Bytes * at least 4 = at least 8 Bytes.
    def drawLines(self, points):
        pass

    # Draws a polygon. Takes at least three points.
    #
    # points is an array of at least 4 integers, each 2 Bytes.
    # 2 Bytes * at least 4 = at least 8 Bytes.
    def drawPoly(self, points):
        pass

    # Draws a rectangle. Takes two points.
    #
    # point1 and point 2 are pairs of integers, each 4 Bytes. fill is a
    # boolean 1 Byte in size.
    # 4 Bytes * 2 = 8 Bytes + 1 Byte = 9 Bytes.
    def drawRectangle(self, point1, point2, fill):
        pass

    # Draws a circle. Takes a point and radius.
    #
    # point is a pair of integer 2 Bytes each. radius is an integer
    # 1 Byte in size.
    # 4 Bytes + 1 Byte = 5 Bytes.
    def drawCircle(self, point, radius):
        pass

    
    # font is an int ranging from 0 to 255, 1 Bytes in size.
    # 1 Byte.
    def setFont(self, font)
        pass

    # point is a pair of integer 2 Bytes each. String is at least 1 Byte
    # times the number of characters.
    # 4 Bytes + 1 Byte * length of string = at least 5 Bytes.    
    def drawText(self, point, string):
        pass

