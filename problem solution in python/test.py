students = []

def student_registration():

    while True:
        print("\n1. Register Student")  
        print("2. View All Students")
        print("3. Exit")

        choice = input("Enter option: ")
            Student_name = input("Enter Name: ").strip()
            FatherName = input("Enter Father Name: ").strip()
            MotherName = input("Enter Mother Name: ").strip()
            RollNumber = input("Enter Roll Number: ").strip()
            Department = input("Enter Department: ").strip()


        if choice == "1":

            

            # Validation
            if not Student_name or not FatherName or not MotherName or not RollNumber or not Department:
                print(" All fields are required!")
                continue

            student = {
                "Student_name": Student_name,
                "FatherName": FatherName,
                "MotherName": MotherName,
                "RollNumber": RollNumber,
                "Department": Department
            }

            students.append(student)
            print(f"\n✔ Student {Student_name} registered successfully!")

        # ======================
        # VIEW STUDENTS
        # ======================
        if choice == "2":
            if len(students) == 0:
                print("No students found.")
            else:
                for s in students:
                    print(s)

        # ======================
        # EXIT
        # ======================
        elif choice == "3":
            print("Exiting system...")
            break
        else:
            print("Invalid option!")

student_registration()