ages = [22,23,25,28,34,36,38,39]
names = ["Alex", "Katie", "Andrew", "Vienna", "Treyson", "Xavier", "Jake"]
print(names[4])
print(len(names))
print(names)
names[0]= "Eric"
names.append("Jayshree")
index = names.index("Vienna") 
names.pop(index)
print(names)

for name in names:
    print(f"Hella {name}")


for number in ages:
    print(f"{number} sqaured is {number**2}")

    for i in range (20):
        print(f"it is the {i} iteration of this loop")  