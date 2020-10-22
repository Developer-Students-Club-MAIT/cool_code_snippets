# Tic-Tac-Toe 

## Description
Tic-Tac-Toe is a game in which two players alternately put Xs and Os in compartments of a figure formed by two vertical lines crossing two horizontal lines and each tries to get a row of three Xs or three Os before the opponent does. The game is played on a grid that's 3 squares by 3 squares.

## Code
```python
from os import system, name
# import sleep to show output for some time period 
from time import sleep

# define our clear function
def clear():
    # for windows
    if name == 'nt':
        _ = system('cls')

    # for mac and linux(here, os.name is 'posix')
    else:
        _ = system('clear')


clear()
block1 = "."
block2 = "."
block3 = "."
block4 = "."
block5 = "."
block6 = "."
block7 = "."
block8 = "."
block9 = "."
Player1 = input("\n\t\t\t\tEnter the name of the first player:")
Player2 = input("\n\t\t\t\tEnter the name of the second player:")


def End_Check():
    if (block1 != "." and block2 != "." and block3 != "." and block4 != "." and block5 != "." and block6 != "." and block7 != "." and block8 != "." and block9 != "."):
        print("\n\n\t\t\t\tIT IS A DRAW!!!")
        return 1


def show_Board():
    print("\n")
    print("\t\t\t\t        ", block1, "|     ", block2, "|    ", block3)
    print("\t\t\t\t-------------------------------")
    print("\t\t\t\t        ", block4, "|     ", block5, "|    ", block6)
    print("\t\t\t\t-------------------------------")
    print("\t\t\t\t        ", block7, "|     ", block8, "|    ", block9)


show_Board()


def Check_win():
    win = "VICTORY"
    lose = "LOST"
    if ((block1 == block2 and block2 == block3 and block2 != ".") or (block1 == block4 and block4 == block7 and block4 != ".") or (
            block1 == block5 and block5 == block9 and block5 != ".") or (block2 == block4 and block4 == block8 and block4 != ".") or (
            block3 == block6 and block6 == block9 and block6 != ".") or (block7 == block8 and block8 == block9 and block8 != ".") or (
            block4 == block5 and block5 == block6 and block5 != ".") or (block3 == block5 and block5 == block7 and block5 != ".")):
        return (win)
    else:
        return (lose)


print("\n\t\t\t\t*********WELCOME PLAYERS!*********\n")
while (1):
    n = int(input("\n\t\t\t\t" + Player1 + ": Enter number:"))
    if n == 1 and block1 == ".":
        block1 = "X"
    elif n == 2 and block2 == ".":
        block2 = "X"
    elif n == 3 and block3 == ".":
        block3 = "X"
    elif n == 4 and block4 == ".":
        block4 = "X"
    elif n == 5 and block5 == ".":
        block5 = "X"
    elif n == 6 and block6 == ".":
        block6 = "X"
    elif n == 7 and block7 == ".":
        block7 = "X"
    elif n == 8 and block8 == ".":
        block8 = "X"
    elif n == 9 and block9 == ".":
        block9 = "X"
    else:
        print("\n\t\t\t\tPlease enter only numbers between 1-9 which are not filled yet")
        n = int(input("\n\t\t\t\t" + Player1 + ": Enter number:"))
        if n == 1 and block1 == ".":
            block1 = "X"
        elif n == 2 and block2 == ".":
            block2 = "X"
        elif n == 3 and block3 == ".":
            block3 = "X"
        elif n == 4 and block4 == ".":
            block4 = "X"
        elif n == 5 and block5 == ".":
            block5 = "X"
        elif n == 6 and block6 == ".":
            block6 = "X"
        elif n == 7 and block7 == ".":
            block7 = "X"
        elif n == 8 and block8 == ".":
            block8 = "X"
        elif n == 9 and block9 == ".":
            block9 = "X"
    show_Board()
    str = Check_win()
    if (str == "VICTORY"):
        print("\n\t\t\t\t" + Player1 + " WINS")
        break
    if (End_Check()):
        break
    m = int(input("\n\t\t\t\t" + Player2 + ": Enter number:"))
    if m == 1 and block1 == ".":
        block1 = "O"
    elif m == 2 and block2 == ".":
        block2 = "O"
    elif m == 3 and block3 == ".":
        block3 = "O"
    elif m == 4 and block4 == ".":
        block4 = "O"
    elif m == 5 and block5 == ".":
        block5 = "O"
    elif m == 6 and block6 == ".":
        block6 = "O"
    elif m == 7 and block7 == ".":
        block7 = "O"
    elif m == 8 and block8 == ".":
        block8 = "O"
    elif m == 9 and block9 == ".":
        block9 = "O"
    else:
        print("\t\t\t\tPlease enter only numbers between 1-9 which are not been chosen already.")
        m = int(input("\n\t\t\t\t" + Player2 + ": Enter number:"))
        if m == 1 and block1 == ".":
            block1 = "X"
        elif m == 2 and block2 == ".":
            block2 = "X"
        elif m == 3 and block3 == ".":
            block3 = "X"
        elif m == 4 and block4 == ".":
            block4 = "X"
        elif m == 5 and block5 == ".":
            block5 = "X"
        elif m == 6 and block6 == ".":
            block6 = "X"
        elif m == 7 and block7 == ".":
            block7 = "X"
        elif m == 8 and block8 == ".":
            block8 = "X"
        elif m == 9 and block9 == ".":
            block9 = "X"
    show_Board()
    str = Check_win()
    if (str == "VICTORY"):
        print("\t\t\t\t" + Player2 + " WINS")
        break
    if (End_Check()):
        break
```
## Output

```
				Enter the name of the first player:arnab

				Enter the name of the second player:arjit


				         . |      . |     .
				-------------------------------
				         . |      . |     .
				-------------------------------
				         . |      . |     .

				*********WELCOME PLAYERS!*********


				arnab: Enter number:10

				Please enter only numbers between 1-9 which are not filled yet

				arnab: Enter number:1


				         X |      . |     .
				-------------------------------
				         . |      . |     .
				-------------------------------
				         . |      . |     .

				arjit: Enter number:4


				         X |      . |     .
				-------------------------------
				         O |      . |     .
				-------------------------------
				         . |      . |     .

				arnab: Enter number:5


				         X |      . |     .
				-------------------------------
				         O |      X |     .
				-------------------------------
				         . |      . |     .

				arjit: Enter number:9


				         X |      . |     .
				-------------------------------
				         O |      X |     .
				-------------------------------
				         . |      . |     O

				arnab: Enter number:7


				         X |      . |     .
				-------------------------------
				         O |      X |     .
				-------------------------------
				         X |      . |     O

				arjit: Enter number:3


				         X |      . |     O
				-------------------------------
				         O |      X |     .
				-------------------------------
				         X |      . |     O

				arnab: Enter number:6


				         X |      . |     O
				-------------------------------
				         O |      X |     X
				-------------------------------
				         X |      . |     O

				arjit: Enter number:8


				         X |      . |     O
				-------------------------------
				         O |      X |     X
				-------------------------------
				         X |      O |     O

				arnab: Enter number:3

				Please enter only numbers between 1-9 which are not filled yet

				arnab: Enter number:2


				         X |      X |     O
				-------------------------------
				         O |      X |     X
				-------------------------------
				         X |      O |     O


				IT IS A DRAW!!!

```

## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Arnab Bhakta | arnab031 | Future Institute of Engineering and Management, Kolkata |