# summation of N digits of Array

# calculate summation of digits
def summation(A) :
    # Initialize sum
    sum = 0

    for digit in A:
        # Convert the character digit to an integer and add to the sum
        sum += int(digit)

    print("Sum of the digits:", sum)




# Number of digits
N = int(input("Enter the number of digits: ")) 
# Array of digits as a string
A = input("Enter the array of digits: ") 

# check if number of degits = size of the array
if(N == len(A)) :
    summation(A)
else :
    print("Number of digits in the array not equal ", N, "!!!")