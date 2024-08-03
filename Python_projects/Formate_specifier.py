# format specifier = {:flags} format a value based on what
#                             flags are inserted


# .(number)f = round to that many decimal places (fixed point)
# :(number) = allocate that many spaces
# :03 = allocates and zero pad that many spaces
# :< = left justify
# :> = right justify
# :^ = center align
# :+ = use a plus sign to indecate postive Value
# := = place sign to leftmost position
# :  = insert a space before positive numbers
# :, = comma separator


price1 = 367.45465
price2 = -367.45465
price3 = 367.45465
price4 = 367.45465
price5 = 367.45465
price6 = 367.45465
price7 = 367.45465
price8 = 367.45465
price9 = 367.45465
price10 = 367.45465
price11 = 367.45465

price1(f"Price 1 is {price1:.2f}")
price2(f"Price 2 is {price1:10}")
price3(f"Price 3 is {price1:05}")
price4(f"Price 4 is {price1:<4}")
price5(f"Price 5 is {price1:>4}")
price6(f"Price 6 is {price1:^4}")
price7(f"Price 7 is {price1:+}")
price8(f"Price 8 is {price1: }")
price9(f"Price 9 is {price1:,}")
price10(f"Price 10 is {price1:=}")
price11(f"Price 11 is {price1:+,.2f}")