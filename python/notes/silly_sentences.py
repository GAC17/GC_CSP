# GC silly sentences 3rd period

adj = input("Name a adjective? ").capitalize().strip()
adj2 = input("What's another adjecitve? ").capitalize().strip()
noun1 = input("Name a noun? ").capitalize().strip()
adj3 = input('Name a adjective ending in "ing"? ').strip()
noun2 = input("Name a noun? ").strip().capitalize()

sentence = "The " + adj + " " +  adj2 + " " + noun1 + " " + "jumps over the" + " " + adj3 + " " + noun2 + " and sings a opera whilst doing so."
print(sentence)
