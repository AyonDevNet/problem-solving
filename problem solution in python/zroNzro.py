# Zero or Non Zero
# Time Limit: 1 Seconds

# Memory Limit: 2.93 MB

# Statement
# In this problem you will be given an integer number N. Print "Zero" if the number is equals to 0 and "Non Zero" Otherwise.

# Constraints
# -1000 <= N <= 1000
# Input format
# The input consists of an integer N.
# Output Format
# Print  Zero if the number is equals to 0 and Non Zero Otherwise.
# Sample Input 1
# 5
# Sample Output 1
# Non Zero


N = int(input("Enter the number : "))

if N == 0:
    print("zero")
else:
    print('Non-Zero')