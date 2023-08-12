# divide list to two lists

major_list = ["mohamed", "abdallah", "elsayed", "omar"]

list1 =[]
list2 =[]

string1 = ""
string2 = ""

for list in major_list:
    
    for index in range(len(list)):
        if index < len(list)/2 :
            string1 += (list[index])
        else :
            string2 += (list[index])

    list1.append(string1)
    list2.append(string2)
    string1 = ""
    string2 = ""
    

print("1st half = ", list1)
print("2nd half = ", list2)