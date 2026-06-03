# Write a function that checks if a word is a palindrome (reads the same forwards and backwards) 
# like "racecar" or "madam". You must manually reverse it using what you already learned,
#  then compare it to the original.
# Expected Output:
# Enter a word: racecar
# racecar is a Palindrome 

# Enter a word: hello
# hello is not a Palindrome 

n = input('Enter the input : ')

result = ""
for i in range(len(n) -1,-1,-1):
    result = result + n[i]
    
if result == n:
    print("it palindrome")
else:
    print("this is not palindrome")


