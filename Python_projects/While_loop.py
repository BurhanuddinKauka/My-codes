#start
#condition
#increment/Decrement

# i=1  #start (Taking a variable i and start with value 1)
# while i<=10:  #condition (till value of i ends or eqauals to with 10)
#     print(i,"Hello") # The word Hello will be printed 10 times
#     i=i+1 #increment

# print(i)


# # Decrement process
# b=10
# while b>=1:
#     print(b,"Hello")
#     b=b-1 #Decrement

# print(b)


# another example:



# method 1

name = ""

while len(name) == 0:
    name = input("What's your name? ")

print("Hello " + name)



# method 2

name = None 

while not name:
    name = input("What's your name? ")

print("Hello " + name)



# phone_number = input("Enter your phone number: ")

# while not phone_number == None or len(phone_number) <10:
#     print("Enter a valid number!")
#     phone_number = input("Enter your phone number: ")

# print(f"Your phone number is {phone_number}")
