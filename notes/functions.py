admin = "Gage"
def hello ():

    print(f"Hello {admin}")
hello()

def hello_user(name):
    print(f"Hello {name}")

def area(length, width):
    return length * width 

side_1 = 12
side_2 = 8
print(f"The area of a rectangle width with side of {side_1} and {side_2} is {area(side_1, side_2)}")




hello()
hello_user ("Axel")
hello_user ("Jake")
hello_user(input("Give me a name: "))


def factorial(number):
    total = 1
    for x in range(number, 1, -1):
        total *= x
    return total 
print(f"The factorial of 5 is {factorial(5)}")
print(f"The factorial of 3 is {factorial(3)}")
print(f"The factorial of 15 is {factorial(15)}")
print(f"The factorial of 12873 is {factorial(1558)}")
