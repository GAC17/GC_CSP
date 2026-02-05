# GC 3RD PERIOD 
def question(cost):
   bill = float(input(f"What is your monthly {cost} "))
   return bill

def precent(bill, income):
   cost_precent = round ((bill/income)*100, 2)
   return precent

def speak(bill, income, precent):
   print(f"Your monthly {bill} is $ {income} which is {precent} % of your income")
income = question("Income$ ")
rent = question("Rent bill$ ")
grocery = question("grocery bill$ ")
transport = question("transit cost$")
util = question("Utility bill$ ")

speak(rent)

saving = float (income * .1) 
spending = (income - (rent + util + grocery + transport + saving))

