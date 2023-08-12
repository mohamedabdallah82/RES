# lucky numbers

A = int(input("Enter number A : "))
B = int(input("Enter number B : "))

# contain lucky numbers
luckyNumbers = ""
    
for n in range(A, B) :
    # count number of 4 or 7
    count = 0    
    for i in str(n) :
        if ( (i == '4') or (i == '7')):
            count += 1
        else :
            break
    
    # check if all digits in the number n = 4 or 7
    if(count == len(str(n))) :
        luckyNumbers += str(n)
        luckyNumbers += " "
    
    
# check if there are a lucky numbers or not    
if(luckyNumbers != "") :
    print("Lucky Numbers => ", luckyNumbers)
else :
    print(-1)