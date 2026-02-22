# Sometimes we don’t know how many inputs a function will get.

# *args collects ALL positional arguments into a tuple.

def add_numbers(*args):
    # args becomes a tuple
    # Example: (1, 2, 3, 4)

    total = 0

    for number in args:
        # Loop through each number
        total = total + number

    return total

print(add_numbers(1, 2, 3))
# Output: 6
print(add_numbers(5, 10, 15, 20))
# Output: 50

# **kwargs collects keyword arguments into a dictionary.

def print_information(**kwargs):
    # kwargs becomes a dictionary
    # Example:
    # {"name": "Alice", "age": 25}

    for key, value in kwargs.items():
        # key is like "name"
        # value is like "Alice"
        print(key, "=", value)


print_information(name="Alice", age=25, city="New York")