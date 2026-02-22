# A decorator wraps a function inside another function.

def my_decorator(original_function):

    # This wrapper function will run instead
    def wrapper():
        print("Before the original function runs")

        # Call the original function
        original_function()

        print("After the original function runs")

    return wrapper


# The @ symbol applies the decorator
@my_decorator
def say_hello():
    print("Hello!")


# When we call say_hello(),
# we are actually calling wrapper()
say_hello()
# Output:
# Before the original function runs
# Hello!
# After the original function runs

# what is happening behind the scenes is this:
@my_decorator
def say_hello():
    print("Hello!")

# Is the same as writing:
def say_hello():
    print("Hello!")

say_hello = my_decorator(say_hello)




# decorators_deep

# A decorator:
# 1) Takes a function
# 2) Returns a new function
# 3) Replaces the original function reference

def simple_decorator(original_function):

    def wrapper():
        print("Before original function runs")

        # Call the original function
        original_function()

        print("After original function runs")

    return wrapper


def say_hello():
    print("Hello!")

# Manually apply decorator
say_hello = simple_decorator(say_hello)

# Now say_hello points to wrapper,
# NOT the original function anymore.

say_hello()

# Using @ syntax does the same thing automatically.