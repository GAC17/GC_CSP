import random 
"""start = 0

while start <= 10:
    print (start)
    start += 2

import random

count = 1
goose = random.randint(1,10)

while count != goose: 
    print("DucK")
    count += 1 

print("GOOSE!")"""

number = random.randint(1,12038)

while True: 
    guess = int(input("Guess a number between 1-25:"))
    if guess == number:
        print(f"Yes, the number was {number}. You've won!")
        break #breaks takes us out of the loop and only works in loops
    elif guess > 12038:
        print("You've failed, that's not a option idiot. 1 through 25")
    elif guess < number:
        print("Gues higher")
    else:
        print("Guess lower")