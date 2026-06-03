appointment_DB = []

def generate_ID():
    number = len(appointment_DB) + 1
    return f"APT00{number}"


def doctor_appointment():

    while True:
        print('''
        1. Book Appointment
        2. View All Appointments
        3. Cancel Appointment
        4. Check Doctor Availability
        5. Exit
        ''')

        option = input("Enter the number: ")

        if option == '1':

            appointment_id = generate_ID()

            doctor_name = input("Enter Doctor Name: ").strip()
            patient_name = input("Enter Patient Name: ").strip()
            patient_mobile_number = input("Enter Patient Mobile Number: ").strip()
            appointment_date = input("Enter Appointment Date: ").strip()
            appointment_time = input("Enter Appointment Time: ").strip()

            if (
                doctor_name == "" or
                patient_name == "" or
                patient_mobile_number == "" or
                appointment_date == "" or
                appointment_time == ""
            ):
                print("All fields are required.")
                continue

            patient_tag = {
                "appointment_id"         : appointment_id,
                "doctor_name"            : doctor_name,
                "patient_name"           : patient_name,
                "patient_mobile_number"  : patient_mobile_number,
                "appointment_date"       : appointment_date,
                "appointment_time"       : appointment_time
            }
            appointment_DB.append(patient_tag)
            print(f"\nAppointment booked successfully!")
            print(f"Appointment ID: {appointment_id}")

        elif option == "2":
            if len(appointment_DB) == 0:
                print("No data found")
            else:
                for n in appointment_DB:
                    print(
                        f"Appointment ID : {n['appointment_id']}\n"
                        f"Doctor Name    : {n['doctor_name']}\n"
                        f"Patient Name   : {n['patient_name']}\n"
                        f"Mobile Number  : {n['patient_mobile_number']}\n"
                        f"Date           : {n['appointment_date']}\n"
                        f"Time           : {n['appointment_time']}\n"
                        
                    )

        elif option == '3':
            name_ID = input("Enter Appointment ID to Cancel: ").strip()
            found = False                              # ✅ Bug 1 fixed
            for s in appointment_DB:
                if s["appointment_id"] == name_ID:
                    appointment_DB.remove(s)
                    print("Appointment cancelled successfully!")
                    found = True
                    break
            if not found:
                print("No data found!")

        elif option == '4':
            doctor_name_free = input("Enter the doctor name: ").strip()
            found = False                             
            for d in appointment_DB:
                if d["doctor_name"].lower() == doctor_name_free.lower():
                    print(
                        f"Appointment ID : {d['appointment_id']}\n"   
                        f"Doctor Name    : {d['doctor_name']}\n"
                        f"Patient Name   : {d['patient_name']}\n"
                        f"Mobile Number  : {d['patient_mobile_number']}\n"
                        f"Date           : {d['appointment_date']}\n"
                        f"Time           : {d['appointment_time']}\n"
                    )
                    found = True
            if not found:
                print("Doctor not found!")

        elif option == '5':
            print("Exiting system...")
            break


doctor_appointment()