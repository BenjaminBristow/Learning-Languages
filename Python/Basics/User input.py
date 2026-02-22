# input() lets the user type something
name = input("Enter your name: ")

# input() always returns text (a string)
print("Hello", name)

# If you want a number, you must convert it
age = int(input("Enter your age: "))  # int() converts text to integer
print("Next year you will be", age + 1)