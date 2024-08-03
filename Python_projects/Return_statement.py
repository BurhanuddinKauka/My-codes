# return statement = Function send Python values/objects back to the caller
#                    These values/objects are known as the function's return value


def multiply(number1,number2):   # Method 1
    result = number1 * number2
    return result

def multiply(number1,number2):   # Method 2
    return number1 * number2

x = multiply(6,8)

print(x)



# def multiply(a, b):
#     return a * b

# first_number = int(input("Enter first number: "))
# last_number = int(input("Enter last number: "))

# result = multiply(first_number, last_number)
# print(result)