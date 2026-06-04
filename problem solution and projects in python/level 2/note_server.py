# Note Saver — Build a program that saves and reads notes from a text file:
# 1. Write a new note
# 2. View all notes
# 3. Exit
# Expected Output:
# Select option: 1
# Enter your note: Learn Python File Handling
# Note saved successfully!

# Select option: 1
# Enter your note: Stage 3 is easy!
# Note saved successfully!

# Select option: 2
# ---- Your Notes ----
# 1. Learn Python File Handling
# 2. Stage 3 is easy!

# Select option: 3
# Goodbye!

def write_note(content):                   #this is the function that helps to write you note books
    with open('note_file.txt', 'a') as file:     #this is the lines which helps create the file to execute
            file.write(content + '\n')          



def read_notes():                      #this is the function that helps to read you notes
    with open("note_file.txt" , 'r') as readfile:
        for i in readfile:              # we run the loops in order to whole files in the loops
            print(i.strip())





def note_server():
    print('''
      1. Write a new note
      2. View all notes
      3. Exit

 ''')
    
   
    while True:     
        choice = input("Enter the choice : ")

        if choice == '1':
            
            input_filed = input("Enter your notes in here : ")
            write_note(input_filed)

        elif choice == '2':
           read_notes()

        elif choice == '3':
            break

        else:
            print("Wrong input")  

note_server()