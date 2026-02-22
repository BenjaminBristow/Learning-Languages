# Python searches for variables using LEGB:

# L = Local
# E = Enclosing
# G = Global
# B = Built-in

x = "global"

def outer():
    x = "enclosing"

    def inner():
        x = "local"
        print("Inside inner:", x)

    inner()

outer()

# Output will be "local"
# Because Python checks Local first.


# Now remove the local variable.

def outer2():
    x = "enclosing"

    def inner():
        print("Inside inner:", x)

    inner()

outer2()

# Now it prints "enclosing"
# Because Python checks:
# 1) Local → not found
# 2) Enclosing → found


# If not found there, it checks global.