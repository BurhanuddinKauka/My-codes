# name = "Bro code"

# print(len(name))
# print(name.capitalize())
# print(name.count("o"))
# print(name.find("o"))
# print(name.upper())
# print(name.lower())
# print(name.isdigit())
# print(name.isalpha())
# print(name.replace("de", "re"))
# print(name*5)
# print(name.title())
# print(help(str))
# print(help(int))

# validate password input exercise
# 1. password must contain atleast 8 letters.
# 2. password must contain numbers.
# 3. password must contain special character.
# 4. password must contain a uppercase alphabet

password = input("Enter your password: ")

if not any(char.isupper() for char in password):
    print("Your password must contain an uppercase letter.")

elif not len(password) >= 8:
    print("Your password must be at least 8 characters long.")

elif not any(char.isdigit() for char in password):
    print("Your password must contain a number.")

elif not any(char in "!@#$%^&*" for char in password):
    print("Your password must contain a special character.")

else:
    print("Login successful!")


#not password.title() is checking whether the first character of the password is uppercase,
# not whether the password contains an uppercase letter. To check whether the password contains an uppercase letter,
# you can use not any(char.isupper() for char in password).

# password.find("1234567890") and password.find("!@#$%^&*") are checking whether the password contains the string "1234567890"
# or "!@#$%^&*", respectively. However, find() returns the index of the first occurrence of the substring, or -1 if the substring
# is not found. Therefore, these conditions will only be false if the substring is found at index 0. To check whether the password
# contains any numbers or special characters, you can use any(char.isdigit() for char in password) and any(char in "!@#$%^&*" for
# char in password), respectively.


phonenumber = input("Enter your phone number: ")

if not any(char.isdigit() for char in phonenumber):
    print("Your phone number is not valid.")

elif len(phonenumber) != 10:
    print("Please enter only 10 digit number")

else:
    print("Login successful!")