# GC 3rd Period Time of day

time = input("What time is it in military time? (0100 - 2400)")
if int(time) < 1200 and int(time) > 400:
    print("Good morning, care for any breakfast?")
elif int(time) < 2000:
    print("Good afternoon")
else: print ("Do you have any idea what time it is?")
