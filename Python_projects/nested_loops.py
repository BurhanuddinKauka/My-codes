# # nested loops =  The "inner loop" will finish all of it's iterations before finishing one iteration of the "outer loop"


# rows = int(input("How many rows you want? "))
# columns = int(input("How many columns you want? "))
# symbol = input("Enter a symbol to use: ")

# for i in range(rows):
#     for j in range(columns):
#         print(symbol, end="")

#     print()



for x in range(3):
    for y in range(1,11):
        print(y, end="")
    print()
