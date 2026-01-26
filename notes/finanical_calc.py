# GC finanical calculator

income = float (input("What is your monthly income?"))
rent = float (input("What is your rent?"))
util = float (input("What is your utility bill?"))
grocery = float (input("What is your grocery bill?"))
transport = float (input("What is your transportation bill?"))

total = round (rent/income) * 100 2
total1 =round (util/income) *100 2
total2 = round (grocery/income)*100 2
total3 = round (transport/income) *100 2
print("Your rent is", (total), "of your income")
print("Your util is", (total1), "of your income")
print("Your grocery bill is", (total2), "of your income")
print("Your transportation bill is", (total3), "of your income")
