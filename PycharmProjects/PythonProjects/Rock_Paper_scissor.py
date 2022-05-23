import random

user_wins = 0
computer_wins = 0

option = ["rock", "paper", "scissor"]
while True:
    user_input = input("Input either rock, paper or scissor (or) 'Q' to quit: ").lower()
    if user_input == 'q':
        print("GoodBye!")
        break
    if user_input not in option:
        continue
    random_number = random.randint(0, 2)
# Rock - 0, Paper - 1, Scissor - 2
    computer_pick = option[random_number]
    print("The computer has picker: ", computer_pick)

    if user_input == "rock" and computer_pick == "scissor":
        print("Congrats! You won!")
        user_wins += 1
    elif user_input == "scissor" and computer_pick == "paper":
        print("Congrats. you won!")
        user_wins += 1
    elif user_input == "paper" and computer_pick == "rock":
        print("Congrats! You win!")
        user_wins += 1
    else:
        print("Computer wins")
        computer_wins += 1

    print("You have won ", user_wins , "times." )
    print("Computer has won", computer_wins , "times")
    print("GoodBye!")






