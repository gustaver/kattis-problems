import sys

first = int(sys.stdin.readline())
second = int(sys.stdin.readline())

first_as_list = map(int, str(first))
second_as_list = map(int, str(second))

if (len(first_as_list) >= len(second_as_list)):
    for i in range(0, len(second_as_list)):
        first_list_length = len(first_as_list)
        second_list_length = len(second_as_list)
        first_list_digit = first_as_list[first_list_length - i - 1]
        second_list_digit = second_as_list[second_list_length - i - 1]
        if (first_list_digit > second_list_digit):
            second_as_list[second_list_length - i - 1] = None
        if (first_list_digit < second_list_digit):
            first_as_list[first_list_length - i - 1] = None
else: 
    for i in range(0, len(first_as_list)):
        first_list_length = len(first_as_list)
        second_list_length = len(second_as_list)
        first_list_digit = first_as_list[first_list_length - i - 1]
        second_list_digit = second_as_list[second_list_length - i - 1]
        if (first_list_digit > second_list_digit):
            second_as_list[second_list_length - i - 1] = None
        if (first_list_digit < second_list_digit):
            first_as_list[first_list_length - i - 1] = None

first_as_string = ""
second_as_string = ""

for integer in first_as_list: 
    if (integer != None):
        first_as_string += str(integer)
for integer in second_as_list:
    if (integer != None):
        second_as_string += str(integer)

if (first_as_string == ""):
    print("YODA")
else: 
    print(int(first_as_string))
if (second_as_string == ""):
    print("YODA")
else: 
    print(int(second_as_string))