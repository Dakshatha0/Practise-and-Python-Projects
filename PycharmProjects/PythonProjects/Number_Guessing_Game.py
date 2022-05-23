import random

#randint included 11.
#randrange doesn't include 11.

top_of_range = input("What is the number you guessed?: ")
if top_of_range.isdigit():
    top_of_range = int(top_of_range)

    if top_of_range <= 0:
        print("Please type a number larger than 0 next time :-)")
        quit()

else:
    print("Please type a number next time:-)")
    quit()

random_number = random.randint(0,top_of_range)
print(random_number)

guesses = 0

while True:
    guesses += 1
    user_guess = input("Guess the number: ")
    if user_guess.isdigit():
        user_guess = int(user_guess)

        if user_guess <= 0:
            print("Type a value greater than 0")
            quit()
    else:
        print("Please type a number next time.")
        continue

    if user_guess == random_number:
       print("You got it!!!!!!!")
       break
    elif user_guess > random_number:
       print("Your guess value is greater than random number")

    else:
        print("Your guess value is less than random number")

print(f"You got it right in {guesses} guesses")



