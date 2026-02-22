# A list stores multiple values in one variable
numbers = [1, 2, 3, 4, 5]

# Accessing items (index starts at 0)
print(numbers[0])  # First item
print(numbers[2])  # Third item

# Adding to a list
numbers.append(6)
print(numbers)

# Removing from a list
numbers.remove(3)
print(numbers)

# Looping through a list
for num in numbers:
    print(num)


# A list comprehension is a shorter way to create lists

# Normal way
numbers = []
for i in range(5):
    numbers.append(i)
print(numbers)

# List comprehension version
numbers = [i for i in range(5)]
print(numbers)

# With condition (only even numbers)
evens = [i for i in range(10) if i % 2 == 0]
print(evens)

# Squaring numbers
squares = [x**2 for x in range(5)]
print(squares)