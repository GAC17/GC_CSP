price = float(input("what is the cost if the item: $"))

tax_rate = float(input("what is the tax percent in your state: %"))

tax_rate_decimal = tax_rate/100

total = round(price*(1 + tax_rate_decimal), 2)

print(round(price*(1 + tax_rate_decimal), 2))

rounded_total = round(total, 2)

print(total)

"""apples = int("27")

friends = 4

print ("Each of my friends can have",int(apples)//friends, "and I will have", apples%friends,"left over.")

"""