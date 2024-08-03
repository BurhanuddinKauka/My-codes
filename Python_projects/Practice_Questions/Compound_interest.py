# principal = 0
# interest = 0
# time = 0

# while principal <= 0:
#     principal = float(input("Enter the amount of principal: "))
#     if principal <= 0:
#         print("The amount of principal must be greater than 0")

# while interest <= 0:
#     interest = float(input("Enter the amount of interest: "))
#     if interest <= 0:
#         print("The rate of Interest must be greater than 0")

# while time <= 0:
#     time = float(input("Enter the amount of time: "))
#     if time <= 0:
#         print("The rate of time must be greater than 0")

# Total_amount = principal * pow((1 + interest / 100), time)
# print(f"Your total amount for {time} years is: ₹ {Total_amount:.2f}")



# method 2

principal = 0
interest = 0
time = 0

while True:
    principal = float(input("Enter the amount of principal: "))
    if principal < 0:
        print("The amount of principal must be greater than 0")
    else:
        break

while True:
    interest = float(input("Enter the amount of interest: "))
    if interest < 0:
        print("The rate of Interest must be greater than 0")
    else:
        break

while True:
    time = float(input("Enter the amount of time: "))
    if time < 0:
        print("The rate of time must be greater than 0")
    else:
        break

Total_amount = principal * pow((1 + interest / 100), time)
print(f"Your total amount for {time} years is: ₹ {Total_amount:.2f}")