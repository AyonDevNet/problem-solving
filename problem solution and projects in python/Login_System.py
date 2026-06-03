
count = 0

while True:
    
    input_username = input("Enter the username : ")
    input_password = input("Enter the password : ")
    stored_username = "admin"
    stored_password = "python123" 
    count = count+1
    
    if input_username == stored_username and input_password == stored_password :
        print(f"Login successfully. You took {count} attemps")
    elif count == 3:
        print("You tried more than 3 times")  
        break
    else:
        print(f"Invalid credentials! {3 - count} attempts remaining")
        
              

