# unique elements of a list

def unique_elements(list):
    unique_list = []
    for ele in list:
        if ele not in unique_list:
            unique_list.append(ele)
    return unique_list

# Example
list = [5, 7, 7, 8, 8, 8, 10]
unique_list = unique_elements(list)
print("First list => ", list)
print("New list => ", unique_list)