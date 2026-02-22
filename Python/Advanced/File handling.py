# "w" means write mode
# If file does not exist, it creates it
# If it exists, it overwrites it

with open("example.txt", "w") as file:
    file.write("Hello\n")
    file.write("This is a file.")

# with means:
# Open the file
# Do the block of code
# Automatically close it afterward


# Now read the file

with open("example.txt", "r") as file:
    content = file.read()
    print(content)