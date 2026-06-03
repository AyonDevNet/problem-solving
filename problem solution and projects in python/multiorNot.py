# Multiple or not
# Time Limit: 1 Seconds

# Memory Limit: 2.93 MB

# Statement
# In this problem you will be given two integers a and b, you have to tell if one is the 
# multiple of other. (a is the multiple of b or b is the multiple of a). 

# Constraints
#  1 <= a, b <= 10000
# Input format
#  Input will contain two integers a, b.
# Output Format
# Print "Yes" if one is the multiple of the other and "No" otherwise.
# Sample Input 1
# 5 9


a = int(input("Enter the number : "))
b = int(input("Enter the number : "))

if a % b == 0:
    print('yes')
else:
    print('No')