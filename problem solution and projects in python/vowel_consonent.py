#  Write a program that takes a string input from the user and counts how many vowels are in it.
# Vowels are: a, e, i, o, u (both uppercase and lowercase)
# Expected Output:
# Enter a string: Hello World
# Total vowels: 3

vowels = {'a', 'e', 'i', 'o','u', 'A', 'E', 'I' , 'O', 'U'}
n = input("Enter the input: ")
count = 0
for i in (n):
    # print(i)
    if i in vowels:
        count = count +1 
print("vowel are : " , count)
    