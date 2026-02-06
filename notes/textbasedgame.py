# GC 3prd larose
kingdom = "The Silent Kingdom"
name = input("What's thy name: ").strip().capitalize()
print(f"Hello {name}")
print(f"My name is Jona, welcome to {kingdom}, where would you like to go")
choice  = input(f"You can go to the princess tower or king tower, what do you choose {name} (King or princess) ").strip().capitalize()
if choice == "King":
    print("You go to the king tower.")
elif choice == "Princess":
    print("You go to the princess tower.")
homeless = input("You see a ugly stupid homeless man, do you A: Give him money or B: Ignore him ").strip().capitalize()
if homeless == "A":
    print("The homeless man tells people about your kindness, you obtain one kindness token ")
elif homeless == "B":
    print("You gain one hate token.")
print(f"You arrive at the {choice} tower.")
#GC