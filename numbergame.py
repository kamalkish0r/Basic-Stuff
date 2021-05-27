import random

name = input("Enter your name: ")
print(f"Welcome {name} to Number Game!")
numbers = [i for i in range(1,101)]
index = random.randint(0,len(numbers)) 
number = numbers[index]

chances = 10
play = "yes"

def Playagain():
    global play 
    play = input("Do you want to play again: (yes/no) ")
    if play == "yes":
        global chances, number
        chances = 10
        index = random.randint(0,len(numbers))
        number = numbers[index]



while play == "yes":
    while chances > 0:
       
        guess = int(input("Enter a number: "))
        if guess == number:
            print("Yeah! You won!!")
            print(f"Your score is {chances*10}")
            Playagain()
            break
        elif guess < number:
            chances -= 1
            print(f"Wrong Answer!! You have {chances} chances left!")
            print(f"Guess a number greater than {guess}")
        else:
            chances -= 1
            print(f"Wrong Answer!! You have {chances} chances left!")
            print(f"Guess a number less than {guess}")
        if chances == 0:
            print("You Lose!!")
            print(f"Lucky number was {number}")
            Playagain()
            break
        if chances == 5 and guess > 100:
            print(f"Hint for you\nlucky lies between 1 to 100")

print("Thank you for playing the Number Game!")
