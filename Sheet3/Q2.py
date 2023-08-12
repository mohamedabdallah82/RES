# Count the Number of Zeros in A Numben

# number of zeros
count = 0
    
# get the number
num = input("Enter a number : ")

for i in num :
    if i == '0' :
        count += 1

print("Number of zeros in ", num, "is", count)
