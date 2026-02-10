kingdom = "The Silent Kingdom"
def controls(): 
    print("To open your inventory type 'INV' to see the items you've obtained.")
    print("Type back in INV to return.")
    print('To move around type "Forwards, Backwards, Left, Right". ')
    print('To use an item, type the items name.')
    print('If preseneted with a choice, type, "A" or "B".')
    print('If forgetful, type "Help" to see the commands again.')

def question():
    answ = input("What do you do? ").lower().strip()
    return answ

def area1():
    print(f"You have made it to Silentville.")
    print(f"There are 3 buildings, a Shop, a Dungeon, and a Barbershop.")
    answ = question()
    return answ

def shop():
    s_value = 0
    print(f"Welcome to Silentvilles' local shop")
    stuff = input("Are you looking to buy anything?").strip().lower()
    if stuff == "yes":
        s_value += 1
        print("We've got a lot, but based on your apperance here pal, you're not buying anything at this establishment.")
    elif stuff == "no":
        s_value += 1
        print("No, brokie")
    else:
        s_value +=1
        print("What are you doing here then?")
        return s_value
    
def b_shop():
    print(f"Welcome to Silentvilles' Barbershop!")
    print("What are you looking for today?")
    cut = input("You tryna look fly?").strip().lower()
    if cut == "yes":
        print("Here your cut yo")
    elif cut == "no":
        print("Leave my shop, pooron")
    else:
        print("What you talking about yo")

def game():
    name = input("What is your name? ")
    print(f"Hello {name} welcome to {kingdom}.")
    controls()
    area1_answ = area1()
    if area1_answ == "backwards":
        print("You can't do that here.")
    elif area1_answ == "left":
        print("You go to the shop.")
        shop()
    elif area1_answ == "right":
        print("You go to the Barbershop.")
        b_shop()
    elif area1_answ == "forwards":
        print("You go fowards.")
    else:
        print("placement")
    

game()