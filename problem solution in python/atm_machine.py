
print('''

    Welcome to the ATM machine .
       Enjoy your money 

''')


# login system panel
stored_username = "admin"
stored_password = "python123" 
count = 0

while True:
    
    input_username = input("Enter the username : ")
    input_password = input("Enter the password : ")
    stored_username = "admin"
    stored_password = "python123" 
    count = count+1
    
    if input_username == stored_username and input_password == stored_password :
        print(f"Login successfully. You took {count} attemps")
        break
    elif count == 3:
        print("You tried more than 3 times")  
        break
    else:
        print(f"Invalid credentials! {3 - count} attempts remaining")
        


# ATM machine panel

def atm_machine():
    check_balance = 1000

    while True:
        print("1. Check Balance")
        print("2. Deposit Money")
        print("3. Withdraw Money")
        print("4. Exit")
        
        choice = input("Select operation: ")  

        if choice == '1':
            print(f"Your Balance is {check_balance}")

        elif choice == '2':
            result = int(input("Add the amount for deposite : "))
            check_balance = check_balance + result       
            print(f"You total Current balance is : {check_balance}")

        elif choice == '3':
            result2 = int(input("Add the amount for Withdraw : "))
            if result2 > check_balance:                  
                print("Insufficient balance!")
            else:
                check_balance = check_balance - result2 
                print(f"Withdraw money amount is {check_balance}")

        elif choice == "4":
            print("Thank you! Goodbye!")
            break

        else:
            print("Invalid choice!")

atm_machine()