import time

current_time = time.localtime()
hour = current_time.tm_hour

if hour < 12:
    print("Good morning!")
elif hour >= 12 and hour < 17:
    print("Good afternoon!")
elif hour >= 17 and hour < 21:
    print("Good evening!")
else:
    print("Good night!")
