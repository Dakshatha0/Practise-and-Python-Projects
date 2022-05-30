name = input("What's your Name?: ")
print("Welcome " + name + "!" + "to the adventure.")
answer = input("You have come to an end now. You can choose to go left or right. Which way would you choose?: ").lower()

if answer == "left":
    answer = input("You've reached a river. You can choose to swim across or walk around it."
                   "Choose your option. Type 'swim' to swim or 'walk' to walk around: ")
    if answer == "swim":
        print("You have been eaten by a crocodile. You lose!")
    elif answer == "walk":
        print("You ran out of water and passed out. You lose!")
    else:
        print("Not a valid option!You lose")

elif answer == "right":
    answer = input("You find a bridge. It's wobbly. Do you want to cross it or head back? "
                   "type 'cross' to cross the bridge or 'hb' to head back: ")
    if answer == 'cross':
        print("The bridge fell down. You die!")
    elif answer == 'hb':
        print("You go back and you lose")
    else:
        print("Not a valid option!You lose")

else:
    print("Not a valid option!You lose")

