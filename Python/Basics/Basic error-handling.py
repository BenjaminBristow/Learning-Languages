# try and except prevent your program from crashing

try:
    number = int(input("Enter a number: "))
    print("You entered", number)
except:
    print("That was not a valid number!")