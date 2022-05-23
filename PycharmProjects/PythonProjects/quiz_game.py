print("Welcome to My Computer Quiz!")
#Creating a Variable
playing = input("Do you want to play?\nType 'yes' or 'no': ");
print(playing)
#Example:
text = "Hi Its Nice to Meet You"
print(text.lower())
if playing.lower() != "yes":
    quit()

print("Okay! Let's Play! :-)")

ans = input("What does CPU stand for?Type in small letters:  ")

if ans == "central processing unit":
    print("Correct!!You get a point.")
else:
    print("Incorrect!")

ans = input("What does OS stand for?Type in small letters:  ")

if ans == "operating system":
    print("Correct!!You get a point.")
else:
    print("Incorrect!")

ans = input("What does GPU stand for?Type in small letters:  ")

if ans == "graphics processing unit":
        print("Correct!!You get a point.")
else:
        print("Incorrect!")

ans = input("What does RAM stand for?Type in small letters:  ")

if ans == "random access memory":
        print("Correct!!You get a point.")
else:
        print("Incorrect!")
