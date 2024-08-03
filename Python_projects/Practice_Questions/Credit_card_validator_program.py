# Python credit card validator pragram:-  # 1234-5678-9012-3456

'''
1. Remove any '-' or ' '
2. Add all digits in the odd places from right to left
3. Double every second digit from right to left.
        (If result is a two-digit number,
        add the two-digit number together to get a single digit.)
4. Sum the totals of steps 2 & 3
5. If sum is divisible by 10, the credit card number is valid
'''

sum_odd_numbers = 0
sum_even_numbers = 0
total = 0

# step 1
card_number = input("Enter your credit card number: ")
card_number = card_number.replace("-", "")
card_number = card_number.replace(" ", "")

# step 2
card_number = card_number[::-1]
for x in card_number[::2]:
    sum_odd_numbers += int(x)

# step 3
for x in card_number[1::2]:
    x = int(x) * 2
    if x >= 10:
        sum_even_numbers += (1 + (x % 10))
    else:
        sum_even_numbers += x

# Step 4
total = sum_even_numbers + sum_odd_numbers

# Step 5
if total % 10 == 0:
    print("VALID")
else:
    print("INVALID")