# Employee Payroll System — Build a program that manages employee salaries using functions.
# 1. Add Employee
# 2. View All Employees
# 3. Search Employee
# 4. Calculate Monthly Payroll
# 5. Exit

# Expected Output:
# Select option: 1
# Enter employee name: Ahmad
# Enter employee ID: 101
# Enter department: IT
# Enter basic salary: RM 3000
# Enter bonus: RM 500
# Employee Ahmad added successfully!

# Select option: 4
# ---- Monthly Payroll Report ----
# 1. Ahmad | ID: 101 | Basic: RM 3000 | Bonus: RM 500 | Total: RM 3500
# ---------------------------------
# Total company payroll: RM 3500



                  #underwork now ######

employee = []   # this is your database (list of employees)

def employee_payroll():
    print("1. Add Employee")
    print("2. View All Employees")
    print("3. Search Employee")
    print("4. Calculate Monthly Payroll")
    print("5. Exit")

    while True:
        choice = input("Enter your choice: ")

        if choice == "1":
            employee_name = input("Enter employee name: ").strip()
            employee_ID = input("Enter the employee ID: ").strip()
            department = input("Enter the Department: ").strip()
            employee_salary = input("Enter the basic salary: ").strip()
            employe_bonus = input("Enter bonus: ").strip()

            if employee_name == "" and employee_ID == "" and department == "" and employee_salary == "" and employe_bonus:
                print("All fields are required!")
                continue

            emp = {  
                "employee_name": employee_name,
                "employee_ID": employee_ID,
                "department": department,
                "employee_salary": float(employee_salary), 
                "employe_bonus" : float(employe_bonus)
            }

            employee.append(emp)   
            print(f"\n Employee {employee_name} registered successfully!")
            print(f"Employee Name : {employee_name}, Employee ID: {employee_ID}, department {department}, employee Salary : {employee_salary} , and Deprartment {department}")

        elif choice == "4":
            result = employee_salary + employe_bonus 
            print("Calculate Monthly Payroll: ", result) 
        else:
            print("Wrong Input")



employee_payroll()