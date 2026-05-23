while True:
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    choice = input("Select operation: ")

    first_number = int(input("Enter first number: "))

    second_number = int(input("Enter second number: "))

    if choice == "1":

        print("Result:", first_number + second_number)

    elif choice == "2":

        print("Result:", first_number - second_number)

    elif choice == "3":

        print("Result:", first_number * second_number)

    elif choice == "4":

        if second_number == 0:    

            print("Error: Cannot divide by zero!")
        else:

            print("Result:", first_number / second_number)

    continue_choice = input("Do you want to continue? (yes/quit): ")

    if continue_choice == "quit":

        break
    else:
        continue
