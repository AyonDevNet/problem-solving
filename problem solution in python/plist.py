# Reverse a String Without Using [::-1] — Write a function that takes a string as input and returns 
# it reversed, 
# but you are not allowed to use Python's built-in slice shortcut.
# Think about how you would loop through the characters manually.

# def reverse_string(n):
#     result = ""
    
#     for i in range(len(n) - 1, -1, -1):
#         result = result + n[i]
    
#     return result

# n = input("Enter the string: ")
# print(reverse_string(n))



n = input('Enter the string : ')
result = " "
for i in range(len(n) - 1, -1, -1):
        result = result + n[i]

print(result)