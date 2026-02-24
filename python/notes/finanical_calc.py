# GC finanical calculator



income = float (input("What is your monthly income?"))
rent = float (input("What is your rent?"))
util = float (input("What is your utility bill?"))
grocery = float (input("What is your grocery bill?"))
transport = float (input("What is your transportation bill?"))


total = round ((rent/income) * 100, 2)
total1 =round ((util/income) *100, 2)
total2 = round ((grocery/income)*100, 2)
total3 = round ((transport/income) *100, 2)

saving = float (income * .1) 
spending =  round (income - (rent + util + grocery + transport + saving), 2 )

print("Your rent is", rent, "which is %", total, "of your income")
print("Your util is", util, "which is %", total1, "of your income")
print("Your grocery bill is", grocery, "which is %", total2, "of your income")
print("Your transportation bill is",grocery, "which is %", total3, "of your income")
print("You're savings are", saving, "Dont cut into saving when you're poor!")
print ("You have", spending, "Left over to spend")