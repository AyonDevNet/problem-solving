# Personal Expense Tracker — Build a program that tracks your daily expenses and saves them to a file so data persists after program closes.
# 1. Add Expense
# 2. View All Expenses
# 3. View Total Spending
# 4. View Spending by Category
# 5. Delete Expense
# 6. Exit
# Expected Output:
# Select option: 1
# Enter expense title: Lunch
# Enter category (Food/Transport/Shopping/Bills): Food
# Enter amount: RM 15.50
# Expense ID: EXP001
# Expense saved successfully!

# Select option: 3
# ---- Total Spending ----
# Total expenses: RM 15.50

# Select option: 4
# Enter category: Food
# ---- Food Expenses ----
# 1. Lunch | RM 15.50
# Total spent on Food: RM 15.50

# Select option: 5
# Enter Expense ID to delete: EXP001
# Expense deleted successfully!


import json


def note_list(expense):                        #this option to add the expens data
    with open("expense_list.txt", "a") as file:
        json.dump(expense, file)
        file.write("\n")


def total_spending():
    with open("expense_list.txt", "r") as file_sp:
        for i in file_sp:    
            json.load(file_sp)
            print(i)

def daily_expense():

    print('''
 
    1. Add Expense
    2. View All Expenses
    3. View Total Spending
    4. View Spending by Category
    5. Delete Expense
    6. Exit
    ''')

    while True:
        choice = input("Enter your choice: ")

        if choice == "1":

            title = input("Enter expense title: ")
            category = input("Enter category (Food/Transport/Shopping/Bills): ")
            amount = float(input("Enter amount: "))
            print("amount should be add Cent")
            expense_id = input("Enter Expense ID: ")

            expense = {
                "title": title,
                "category": category,
                "amount": amount,
                "id": expense_id
            }
            
            note_list(expense)
            print("Expense added successfully")

        elif choice == "2":
            total_spending()
        
        # elif choice == ""


daily_expense()