# GC 3RD PERIOD 
def question(cost):
   bill = float(input(f"What is your monthly {cost} "))
   return bill

def precent(cost, income):
   cost_precent = round ((cost/income)*100, 2)
   return cost_precent

def speak(cost, income, precent):
   print(f"Your monthly {cost} is $ {income} which is {precent} % of your income")

income = question("Income$ ")
rent = question("Rent bill$ ")
grocery = question("grocery bill$ ")
transport = question("transit cost$")
util = question("Utility bill$ ")

saving = float (income * .1) 
spending = (income - (rent + util + grocery + transport + saving))

rentp = precent(rent,income)
groceryp = precent(grocery,income)
transportp = precent(transport,income)
utilp = precent(util,income)
speak("Rent cost", rent, rentp)
speak("Rent cost", grocery, groceryp)
speak("Rent cost", transport, transportp)
speak("Rent cost", util, utilp)
print ("Your savings are$", saving)
print('Your savings are$', saving)