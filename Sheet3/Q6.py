#  second largest and second smallest number in a list

def largest_smallest(numbers) :
    if len(numbers) < 3 :
        return None, None

    largest = second_largest = float('-inf')
    smallest = second_smallest = float('inf')

    for num in numbers :
        if num > largest :
            second_largest = largest
            largest = num
        elif num > second_largest and num != largest :
            second_largest = num
        
        if num < smallest :
            second_smallest = smallest
            smallest = num
        elif num < second_smallest and num != smallest :
            second_smallest = num
    
    return second_largest, second_smallest


list = []

num = int(input("Enter your numbers \"0 to stop\" : "))
while (num != 0) :
    list.append(num)
    num = int(input())


second_largest, second_smallest = largest_smallest(list)

if second_largest is None and second_smallest is None :
    print("The list doesn't have enough elements !!!")
else:
    print("Second largest:", second_largest)
    print("Second smallest:", second_smallest)