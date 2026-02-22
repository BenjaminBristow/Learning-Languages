# Normally, you define a function like this:

def add(a, b):
    return a + b

# You call it like this:
print(add(2, 3))


# A lambda function is just a SHORT one-line function.

# lambda a, b: a + b
# lambda   → means "create a small function"
# a, b     → inputs
# a + b    → what gets returned

add_lambda = lambda a, b: a + b

print(add_lambda(2, 3))


# Where lambdas are really useful:
# when you need a quick function inside another function

numbers = [5, 2, 9, 1]

# sorted() normally sorts from smallest to biggest
print(sorted(numbers))


# But what if we want to sort by distance from 5?

print(sorted(numbers, key=lambda x: abs(x - 5)))

# Let's break that down:
# key= tells sorted HOW to sort
# lambda x: abs(x - 5)
# For each number x,
# calculate how far it is from 5
# Then sort based on that distance