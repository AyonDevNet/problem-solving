# Number Guessing Game — Write a program where:

# A secret number is already set in the code
# The user keeps guessing until they get it right
# After each wrong guess tell the user if their guess is too high or too low
# Count how many attempts it took

# pythonsecret = 42
# Expected Output:
# Guess the number: 10
# Too low!
# Guess the number: 80
# Too high!
# Guess the number: 42
# Correct! You got it in 3 attempts!


secretNumber = 42
tryCount = 0

while True:
    n = int(input("Guess the number: "))
    tryCount = tryCount + 1

    if n == secretNumber:
        print(f"Correct! You got it in {tryCount} attempts!")
        break
    elif n > secretNumber:
        print("Too high!")
    elif n < secretNumber:
        print("Too low!")
