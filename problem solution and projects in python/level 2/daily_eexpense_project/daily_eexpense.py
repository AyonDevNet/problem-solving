import json


def note_list(expense):
    with open("expense_list.txt", "a") as file:
        json.dump(expense, file)
        file.write("\n")


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
            expense_id = input("Enter Expense ID: ")

            expense = {
                "title": title,
                "category": category,
                "amount": amount,
                "id": expense_id
            }
            
            note_list(expense)
            print("Expense added successfully")

daily_expense()