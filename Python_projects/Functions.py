# function = a block of code which is executed only when it is called.

def hello(first_name,last_name,age):
    print("hello "+first_name+" "+last_name)
    print("you are "+str(age)+" years old")
    print("Have a nice day!")


first_name = input("Enter your first name: ")   
last_name = input("Enter your last name: ")   
age = input("Enter your age: ")   
    
hello(first_name,last_name,age)