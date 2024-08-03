# [start : end : step]

# The start point is incluive which means it starts from 0, whereas the end point is exlusive which
# means if we set ending point to 4 it doesn't count the 4th index of number

# eg:- 
# number = "12345"
# print (number[0:4]) 

  # In this scenerio the output will be 1234 the number 5 didn't count because number 5's index is 4 if we count from 0




# w="Welcome to Wscubetech"

# print(w[6]) #Indexing from left to right for eg:-

# #  0   1   2    3   4   5   6   7   8   9  10  11  12  13  14  15  16  
# #  w   e   l    c   o   m   e       t   o       w   s   c   u   b   e
# # -17 -16 -15  -14 -13 -12 -11 -10 -9  -8  -7 -6   -5  -4  -3  -2  -1

# #As we see if we count 6 from left to right the answer will be  printed "e"


# print(w[-2])
# print(w[0:7])
# print(w[0::2])
# print(w[-1::-2])
# print(w[-1::-1])



# # Slicing = Create a substring by extracting elements from another string 
# # indexing[] or slice()
# # [start:stop:step]

# # This whole example is showing indexing

name = "Bro Code"

# first_name = name[0:3] # In this we can also remove zero as python default chooses zero [:3]
# last_name = name[4:8] # In this case we can also remove 8 as python default chooses last digit [4:]
funky_name = name[::2] # In this case we use start, stop and step, Thus the gape between the letter will be 2
# reversed_name = name[::-1] # In this case we use negative or reversed count in step that starts from backward


# print(first_name)
# print(last_name)
print(funky_name) 
# print(reversed_name)


# #This whole example showing slicing

# website = "https://google.com"

# slice = slice*(7,-4)