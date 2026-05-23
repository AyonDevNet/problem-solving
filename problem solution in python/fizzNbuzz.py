# FizzBuzz With a Twist — Print numbers from 1 to 20, but:

# Replace multiples of 3 with "Fizz"
# Replace multiples of 5 with "Buzz"
# Replace multiples of both 3 and 5 with "FizzBuzz"
# Otherwise print the number as it is

# 1
# 2
# Fizz
# 4
# Buzz
# Fizz
# 7
# 8
# Fizz
# Buzz
# 11
# Fizz
# 13
# 14
# FizzBuzz
# 16
# 17
# Fizz
# 19
# Buzz

for i in range(1, 21):
    if i % 3 == 0 and i % 5 == 0: 
        print("FizzBuzz")
    elif i % 3 == 0:
        print("Fizz")
    elif i % 5 == 0:
        print("Buzz")
    else:
        print(i)