# Write a program to calculate area of a rectangle by using input from user:

# length = int(input("Enter the length of rectangle: "))
# width = int(input("Enter the width of rectangle: "))

# print(f"The area of your rectangle is {length * width}")



# Write a program to calculate the price of the item and take (item name, quantity and price) as an input:

item = input("Enter your item: ")
quantity = int(input("Enter the quantity of your item: "))
price = float(input("Enter the price of your item: "))

print(f"You selected {quantity} {item}")
print(f"The total of your {item} is ₹ {quantity * price}")


item = input("Enter your item: ")
quantity = int(input("Enter the quantity of your item: "))
price = float(input("Enter the price of your item: "))

total = quantity * price

print(f"You selected {quantity} {item}")
print(f"The total of your {item} is ₹ {round(total, 2)}") # use this method to round off the number, enter the price like 10.99