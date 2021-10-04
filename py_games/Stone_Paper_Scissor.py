import os
import time
import random


def welcome():
    for i in range(0, 11):
        print("*", end="")
    print()
    print("* WELCOME *", end="")
    print()
    for i in range(0, 11):
        print("*", end="")
    print()
    input("Press ENTER key to start")
    option()


def option():
    print("Welcome to play StonePaperScissors!!!")
    stonepaperscissor()



def stonepaperscissor():
    print("STONE,PAPER,SCISSORS")
    print("You will be competing against the computer")
    print("The competitor who first scores 5 points will be declared as the winner")
    print("For Stone,Enter 0")
    print("For Paper,Enter 1")
    print("For Scissors,Enter 2")
    print("To EndGame and go back to MainMenu,Enter -1")
    user = 0
    comp = 0
    cnt = 0
    choice_play = ["Stone", "Paper", "Scissors"]
    while user < 5 and comp < 5 and cnt < 25:
        cnt += 1
        a = int(input("Enter your choice="))
        for i in range(0, 20):
            print("*", end="")
        print()
        if a == -1:
            print("Thankyou For Playing")
            welcome()
            break
        b = random.choice([0, 1, 2])
        if a == 0 and b == 1:
            comp += 1
        elif a == 0 and b == 2:
            user += 1
        elif a == 1 and b == 0:
            user += 1
        elif a == 1 and b == 2:
            comp += 1
        elif a == 2 and b == 0:
            comp += 1
        elif a == 2 and b == 1:
            user += 1
        print("You:", choice_play[a])
        print("Computer:", choice_play[b])
        print("Scores")
        print("You=", user, "\t Computer=", comp)
        for i in range(0, 20):
            print("*", end="")
        print()
        if(user > comp and user == 5):
            print("Congratulations!!You are the Winner!")
        elif(user < comp and comp == 5):
            print("Sorry!!Better luck next time!")
        elif(user == comp and cnt >= 25):
            print("Its a Draw")


welcome()
print("\n")
option()
