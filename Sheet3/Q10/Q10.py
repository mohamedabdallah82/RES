from Circle import Circle

# Example
radius = float(input("Enter the radius of the circle: "))
circle = Circle(radius)


print("Area of the circle:", circle.calculate_area())
print("Perimeter of the circle:", circle.calculate_perimeter())
