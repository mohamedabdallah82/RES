# Factorial of a number using recursion

def factorial(n):
   if (n == 1) or (n == 0):
       return 1
   else:
       return n * factorial(n-1)

# get the number
num = int(input("Enter a number : "))

# check if the number is valid
if num > 0:
   print("The factorial of", num, "is", factorial(num))
else:
   print("Invalid value !!!")