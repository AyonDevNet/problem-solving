##
# ##
#Task : Overview : Problem — Student Registration System
# Build a program that registers students and manages their data using functions.
# 1. Register Student
# 2. View All Students
# 3. Search Student by Name
# 4. Exit

# Select option: 1
# Enter student name: Ahmad
# Enter student age: 20
# Enter student course: Software Engineering
# Student registered successfully!

# Select option: 1
# Enter student name: Ali
# Enter student age: 22
# Enter student course: Network Engineering
# Student registered successfully!

# Select option: 2
# ---- All Students ----
# 1. Ahmad | Age: 20 | Course: Software Engineering
# 2. Ali   | Age: 22 | Course: Network Engineering

# 


students = [] 
def student_regitration():
    print("1. Register Student")  
    print("2. View All Students")
    print("3. Search Student by Name")
    print("4. Exit")

    print("*** Must Fill up all the Field *** ")

    while True:  
        choice1 = input("Enter the number : ")

        if choice1 == '1':
            Student_name = input("Enter the your Name : ").strip()
            FatherName = input("Enter the Father name : ").strip()
            MotherName = input("Enter the Mother name : ").strip()
            RollNumber = input("Enter the Student ID name : ").strip()
            Deparment = input("Enter the deparment name : ").strip()

            if Student_name == "" or FatherName == "" or MotherName == "" or RollNumber == "" or Deparment == "": 
                print("This field is required! Please fill all fields.")
                continue

            student = {  
                "Student_name": Student_name,
                "FatherName"  : FatherName,
                "MotherName"  : MotherName,
                "RollNumber"  : RollNumber,
                "Deparment"   : Deparment
            }

            students.append(student) 
            print(f"\nStudent {Student_name} registered successfully!")
            print(f"Your Name : {Student_name}, Your father name : {FatherName}, Your Mother name {MotherName}, Roll number {RollNumber}, and Deprartment {Deparment}")

        elif choice1 == "2":
            if len(students) == 0: 
                print("No students found.")
            else:
                for s in students:  
                    print(s)

        elif choice1 == "3":
            name = input("Enter name to search : ").strip()
            found = False
            for s in students:
                if s["Student_name"].lower() == name.lower():
                    print(f"\nStudent Found!")
                    print(f"  Name       : {s['Student_name']}")
                    print(f"  Father     : {s['FatherName']}")
                    print(f"  Mother     : {s['MotherName']}")
                    print(f"  Roll Number: {s['RollNumber']}")
                    print(f"  Department : {s['Deparment']}")
                    found = True
                    break
            if not found:
                print("Student not found!")

        elif choice1 == "4":
            print("Exiting system...")
            break

        else:
            print("Invalid option!")

student_regitration()