# Logical operators (and, or, not) = used to check if two or more conditional statements is true

#                   and = checks two or more conditions if True
#                   or = checks if at least one conditions if True
#                   not = True if condition is False, and vice versa


temp = float(input("What is the temperature outside?: "))

if temp >= 0 and temp <=30:
    print("The temprature is good today!")
    print("You can go outside!")

elif temp < 0 or temp > 30:
    print("The temperature is bad today!")
    print("Stay inside!")


if not (temp >= 0 and temp <=30):
    print("The temprature is good today!")
    print("You can go outside!")

elif not (temp < 0 or temp > 30):
    print("The temperature is bad today!")
    print("Stay inside!")