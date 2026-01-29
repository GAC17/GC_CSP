"""number = 10002

if abs(number) < 10:
     print(f"{number} is a single digit number")
elif number < 100:
     print(f"{number} is a 2 digit number")
else:
     print("Your number is too big yo")"""

name = input("What is your name:").strip().capitalize()
boolean = True #false 
if not name == "Gage" and not name == "trevor":
    print("I love your hair. How often do you you dye it?")
    ofen = input("In months how often do you dye your hair")
    if int(ofen) < 3:
        print("Wow that is a lot of work")
    else:
        print("That is super cool, and expensive")
else:
    print(f"Hello {name}!")
