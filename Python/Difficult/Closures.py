# A closure happens when:
# An inner function remembers variables
# from its enclosing function
# EVEN AFTER the outer function finishes.

def outer_function(message):

    # message is stored in memory

    def inner_function():
        # inner_function uses message
        # It "remembers" message
        print("Message is:", message)

    return inner_function


# Call outer_function
my_function = outer_function("Hello World")

# At this point:
# outer_function has finished running.
# BUT inner_function still remembers "Hello World"

my_function()

# That memory retention is called a CLOSURE.