
# Find the Largest Number in a List — Write a program that finds the largest
# number in a list without using Python's built-in max() function.
# pythonnumbers = [3, 67, 23, 87, 45, 12, 99, 56]
# Expected Output:
# Largest number is: 99


numbers = [3, 67, 23, 87, 45, 12, 99, 56]
largest = numbers[0]

for i in numbers:
    if i > largest:
        largest = i

print("Largest number is:", largest)