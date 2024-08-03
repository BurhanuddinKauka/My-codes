num1 = int(input("Enter the 1st number: "))
num2 = int(input("Enter the 2nd number: "))
opr = input("Enter the opr... (+, -, *, /): ")

if opr== "+":
    print(num1 + num2)

if opr== "-":
    print(num1 - num2)

if opr== "*":
    print(num1 * num2)

if opr== "/":
    print(num1 / num2)

if opr!="+" and "-" and "*" and "/":
    print("Invalid oprator...")


