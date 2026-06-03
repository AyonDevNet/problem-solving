# Write a function that takes a list like [1, 2, 3, 4, 5] and returns it reversed without using
# any built-in reverse method. 
# Think about how the index approach you just learned applies here too.

n = input("enter the string : ")
result= ""
for i in range(len(n) -1,-1,-1):
        result = result + n[i]
print(result)