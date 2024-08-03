# scope = The region that variable is recognised
#          A variable is only available from inside the region it is created.
#          A global and locally scoped versions of a variable can be created.


name = "Bro"

def display_name():
    name = "Code"
    print(name)


display_name()
print(name)



# name = "Bro": This line creates a global variable called name and assigns the value "Bro" to it.

# def display_name():: This line defines a function called display_name.

# name = "Code": This line creates a local variable inside the function display_name also called name and assigns the value "Code" to it. This local variable shadows the global name variable, meaning that inside the function, the value of name is "Code".

# print(name): This line inside the function display_name prints the value of the local name, which is "Code".

# display_name(): This line calls the function display_name, causing it to execute and print "Code".

# print(name): This line outside of the function prints the value of the global name, which is still "Bro".

# So in summary, the code creates a global variable called name with the value "Bro", defines a function called display_name that creates a local variable with the same name and the value "Code", calls the function and prints "Code", and finally prints the global name which is "Bro".