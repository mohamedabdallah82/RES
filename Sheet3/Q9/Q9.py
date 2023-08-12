from parallelogram import Parallelogram
print("")
print("")
side1 = float(input("Enter the length of side 1: "))
side2 = float(input("Enter the length of side 2: "))
angle_degrees = float(input("Enter the angle between the sides in degrees: "))

print("")
parallelogram = Parallelogram(side1, side2, angle_degrees)
area = parallelogram.calculate_area()

print("The area of the parallelogram is: ", area, "square units")