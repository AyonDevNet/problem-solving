#syntax : open() - build in function and ("add your file name", 'give the permission')


f = open("example.txt" , 'w')  #example.txt is file name that will create same folder and 'w' is permission that this file is write
f.write("Hello World")
f.close() # this is close which close the code, think like note books.


# multiline

f = open("example2.txt", 'w')

f.write("Hello world")
f.write("\nhow are you")
f.close()

# append mode without deleing 

f = open("example2.txt", 'a')
f.write("\nthis is devnet")
f.close()



#read  operation 

fa = open("example.txt", "r")
s = fa.read()

print(s)
print(fa.readline())


#with automatically closes the file when you're done with it.

with open("example.txt", "r") as file:
    content = file.read()
    print(content)

with open('example2.txt', 'w') as file:
    content2 = file.write("\nhi baby")
    print(content2)

#print the number of charcters

with open("example2.txt" , 'r') as fileToread:
    content3= fileToread.read(5)
    print(content3)



#tell() will show that what will next charcter will be print and seek() will manage where to start the printing function

# What tell() does

# tell() returns the current cursor position (byte position) in the file.

# What seek() does

# seek(position) moves the cursor to a specific position in the file.



with open("example.txt" , 'r') as filed:
    content3 = filed.tell()
    print(content3)
    content4 = filed.seek(0)  #it is says start from 0 again to print


#now let's see how does seek() work in the Write type :

with open("data.txt", 'w') as faaaah:
    faaaah.write("Hello world")
    faaaah.seek(0)
    faaaah.write("X")

#out put will be the Xello,



#let work wih binary files, read and write at onace : 
#for binary files we need to use b in here in order to find out read and write 
with open("images(1).jpg", "rb") as fi:
    with open("copy_images.jpg", "wb") as wf:
        wf.write(fi.read())