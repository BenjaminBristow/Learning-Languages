# IMPORTANT IDEA:
# Variables do NOT store values.
# Variables store REFERENCES to objects in memory.

# Let's create a variable.
x = 10

# id() shows the memory address of the object.
print("Memory address of x:", id(x))

# Now assign y to x.
y = x

print("Memory address of y:", id(y))

# Notice:
# x and y have the SAME memory address.
# That means both names point to the SAME object in memory.

# Now change x.
x = 20

# What happened?
# Python did NOT change 10.
# Python created a NEW object 20,
# and made x point to it.

print("x:", x)
print("y:", y)

# Now x and y point to DIFFERENT objects.

print("Memory address of new x:", id(x))
print("Memory address of y:", id(y))

# This is how Python really works:
# Names → point to objects
# Objects → live in memory