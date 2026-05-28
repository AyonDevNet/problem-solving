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

#point to be noted : Monthly Payroll is always the SUM of every single employee in the company — 
# never just one person.
#  That is why we loop through all employees and add them up!

# Select option: 4
# ---- Monthly Payroll Report ----
# 1. Ahmad | ID: 101 | Basic: RM 3000 | Bonus: RM 500 | Total: RM 3500
# ---------------------------------
# Total company payroll: RM 3500




employee = []

def employee_payroll():
    while True:                          
        print("\n1. Add Employee")
        print("2. View All Employees")
        print("3. Search Employee")
        print("4. Calculate Monthly Payroll")
        print("5. Exit")

        choice = input("Enter your choice: ")

        if choice == "1":
            employee_name = input("Enter employee name: ").strip()
            employee_ID = input("Enter the employee ID: ").strip()
            department = input("Enter the Department: ").strip()
            employee_salary = input("Enter the basic salary: ").strip()
            employe_bonus = input("Enter bonus: ").strip()

            if employee_name == "" or employee_ID == "" or department == "" or employee_salary == "" or employe_bonus == "":  # ✅ Bug 1 fixed
                print("All fields are required!")
                continue

            emp = {
                "employee_name"  : employee_name,
                "employee_ID"    : employee_ID,
                "department"     : department,
                "employee_salary": float(employee_salary),
                "employe_bonus"  : float(employe_bonus)
            }

            employee.append(emp)
            print(f"\nEmployee {employee_name} registered successfully!")
            print(f"Employee Name : {employee_name}, Employee ID: {employee_ID}, Department: {department}, Salary: RM {employee_salary}, Bonus: RM {employe_bonus}")

        elif choice == "2":
            if len(employee) == 0:                  
                print("There are no employees here")
            else:
                for s in employee:
                    print(s)

        elif choice == "3":
            name = input("Enter name to search : ").strip()
            found = False
            for s in employee:
                if s["employee_name"].lower() == name.lower():
                    print(f"\nEmployee Found!")
                    print(f"  Name            : {s['employee_name']}")
                    print(f"  Employee ID     : {s['employee_ID']}")
                    print(f"  Department      : {s['department']}")
                    print(f"  Basic Salary    : RM {s['employee_salary']}")
                    print(f"  Bonus           : RM {s['employe_bonus']}")
                    found = True
                    break
            if not found:
                print("Employee not found!")

        elif choice == "4":
          total_payroll = 0
          print("\n---- Monthly Payroll Report ----")
    
          for e in employee:                                        
           total = e["employee_salary"] + e["employe_bonus"]    
           total_payroll = total_payroll + total               
           print(f"Name: {e['employee_name']} | ID: {e['employee_ID']} | Basic: RM {e['employee_salary']} | Bonus: RM {e['employe_bonus']} | Total: RM {total}")
    
           print(f"---------------------------------")
           print(f"Total company payroll: RM {total_payroll}")

        elif choice == "5":
            print("Goodbye!")
            break

employee_payroll()