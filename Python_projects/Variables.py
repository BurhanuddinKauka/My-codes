# Variable = a container for a value. Behaves as the value that it contains

first_name = "Bro"
last_name = "Code"
full_name = first_name + " " + last_name

print("Hello there! " + full_name)


age = 19
age += 1

print("You are " + str(age) + " years old")


# Type casting:

age = 20         # Integer data type
print(type(age))

name = "Bro"         # String data type
print(type(name))

height = 256.37        # Float data type
print(type(height))

human = True        # Bollean data type
print(type(human))
print("You are a human: " + str(human))