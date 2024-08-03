# # weight converter

weight = float(input("Enter your weight: "))
unit = input("kilogram or pounds (kg or lbs): ")

if unit == "kg":
    weight = weight * 2.20462
    unit = "lbs"
    print(f"Your weight is {round(weight, 1)} {unit}")
    
elif unit == "lbs":
    weight = weight / 2.20462
    unit = "kg"
    print(f"Your weight is {round(weight, 1)} {unit}")

else:
    print("You have entered an invalid weight")



# Temprature converter

unit = input("Enter your unit (c or f): ")
temperature = float(input("Enter your temperature: "))

if unit == "c":
    temperature = round((temperature * 9/5) + 32, 2)
    print(f"Your temperature in {unit} is {temperature}ºC")

elif unit == "f":
    temperature = round((temperature - 32) * 5/9, 2)
    print(f"Your temperature in {unit} is {temperature}ºF")

else:
    print("You have entered Invalid unit")