import math

class Parallelogram:
    def __init__(self, side1, side2, angle_degrees):
        self.side1 = side1
        self.side2 = side2
        self.angle_degrees = angle_degrees

    def calculate_area(self):
        angle_radians = math.radians(self.angle_degrees)
        area = self.side1 * self.side2 * math.sin(angle_radians)
        return area