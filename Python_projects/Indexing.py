# index operator [] = gives access to a sequence's elements (str, list, tuples)

name = "bro Code!"

if(name[0].islower()):
    name = name.capitalize()

First_name = name[0:3].upper()
Last_name = name[4:].lower()
Last_character = name[-1]

print(First_name)
print(Last_name)
print(Last_character)