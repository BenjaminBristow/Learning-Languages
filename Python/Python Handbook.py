# ===========================================================================
# ADVANCED PYTHON HANDBOOK (DETAILED EXPLANATIONS)
# This file contains Python examples with extensive comments explaining 
# every concept in simple terms. High-level concepts are broken down
# step-by-step for better understanding.
# ===========================================================================

# ===============================
# 1. VARIABLES & DATA TYPES
# ===============================

# Variables store information in memory. Python automatically detects type.
x = 10              # Integer (whole number)
y = 3.5             # Float (decimal number)
name = "Alice"      # String (text enclosed in quotes)
is_active = True    # Boolean (True or False)
nothing = None      # NoneType represents "no value" or "empty"

# Print the variables to see their values
print("Integer:", x)
print("Float:", y)
print("String:", name)
print("Boolean:", is_active)
print("None type:", nothing)

# ===============================
# 2. DATA STRUCTURES
# ===============================

# LISTS: ordered, changeable collection of items
fruits = ["apple", "banana", "cherry"]
fruits.append("orange")    # Adds "orange" to the end
fruits.remove("banana")    # Removes "banana"
print("Fruits List:", fruits)
# Lists are useful when you need to store multiple items in a specific order
# You can access items using their index: first element is index 0
print("First fruit:", fruits[0])
print("Last fruit:", fruits[-1])  # Negative index starts from the end

# TUPLES: ordered but immutable (cannot change after creation)
coordinates = (10, 20)
print("Tuple coordinates:", coordinates)
# Tuples are useful for fixed collections, like x,y coordinates or RGB colors

# SETS: unordered collection of unique items
unique_numbers = {1, 2, 3, 3}  # Duplicates are automatically removed
unique_numbers.add(4)           # Add new element
unique_numbers.remove(2)        # Remove element
print("Set of numbers:", unique_numbers)
# Sets are great for checking membership quickly and removing duplicates

# DICTIONARIES: key-value pairs, like real-world dictionary
person = {"name": "Alice", "age": 25, "city": "NY"}
print("Person name:", person["name"])
# Add or update key-value pairs
person["age"] = 26
person["email"] = "alice@example.com"
print("Updated person dict:", person)
# Use dictionaries when you need to store structured data (like JSON)

# ===============================
# 3. CONDITIONALS
# ===============================

age = 18
# Basic if-elif-else structure
if age >= 18:
    print("Adult")       # This block runs if age >= 18
elif age >= 13:
    print("Teenager")    # This block runs if age >= 13 but less than 18
else:
    print("Child")       # Runs if no previous condition matches

# Ternary operator: shorthand for simple if-else
status = "Adult" if age >= 18 else "Minor"
print("Status:", status)

# ===============================
# 4. LOOPS
# ===============================

numbers = [1, 2, 3, 4, 5]

# For loop: iterate over each item in a collection
for num in numbers:
    print("Number:", num)

# While loop: runs as long as condition is True
count = 0
while count < 3:
    print("Count:", count)
    count += 1

# Break and continue: control flow tools
for i in range(5):
    if i == 2:
        continue  # Skip this iteration, go to next
    if i == 4:
        break     # Stop the loop entirely
    print("Loop i:", i)

# ===============================
# 5. FUNCTIONS
# ===============================

# Functions are reusable blocks of code that perform a task
def greet(name):
    """Greets a person"""
    return f"Hello, {name}!"

print(greet("Alice"))

# Functions with default arguments
def greet_with_prefix(name, prefix="Mr./Ms."):
    return f"Hello, {prefix} {name}"

print(greet_with_prefix("Bob"))        # Uses default prefix
print(greet_with_prefix("Bob", "Dr.")) # Overrides default

# Variable arguments (*args) and keyword arguments (**kwargs)
def sum_all(*args):
    """Sum any number of numbers"""
    total = 0
    for num in args:
        total += num
    return total

print("Sum:", sum_all(1, 2, 3, 4, 5))

def person_info(**kwargs):
    """Prints key-value info"""
    for key, value in kwargs.items():
        print(f"{key}: {value}")

person_info(name="Alice", age=25, city="NY")

# ===============================
# 6. OBJECT-ORIENTED PROGRAMMING (OOP)
# ===============================

# Classes are blueprints for creating objects
class Person:
    # Constructor: called when a new object is created
    def __init__(self, name, age):
        self.name = name  # Instance variable (unique per object)
        self.age = age

    # Instance method: operates on the object instance
    def greet(self):
        return f"Hello, my name is {self.name} and I am {self.age} years old."

    # Class method: shared across all instances
    @classmethod
    def info(cls):
        return "This is a Person class."

    # Static method: independent, does not access instance or class variables
    @staticmethod
    def static_message():
        return "This method is independent of instance or class."

# Create object
alice = Person("Alice", 25)
print(alice.greet())           # Calls instance method
print(Person.info())           # Calls class method
print(Person.static_message()) # Calls static method

# INHERITANCE: Child class inherits from parent
class Employee(Person):
    def __init__(self, name, age, position):
        super().__init__(name, age)  # Initialize parent class
        self.position = position

    def work(self):
        return f"{self.name} is working as {self.position}."

bob = Employee("Bob", 30, "Developer")
print(bob.greet())  # Inherited from Person
print(bob.work())   # Employee-specific method

# Explanation:
# - OOP allows us to model real-world objects
# - Inheritance lets child classes reuse code from parent classes
# - Instance methods access object-specific data
# - Class methods access class-wide data
# - Static methods are utility functions related to the class

# ===============================
# 7. EXCEPTIONS
# ===============================

try:
    x = 10 / 0  # This will raise ZeroDivisionError
except ZeroDivisionError:
    print("Cannot divide by zero")  # Specific error handling
except Exception as e:
    print("An unexpected error occurred:", e)  # Catch-all for other errors
finally:
    print("This block always runs")  # Cleanup or final actions

# ===============================
# 8. FILE HANDLING
# ===============================

# Using 'with' ensures file is closed automatically
with open("example.txt", "w") as f:
    f.write("Hello Python\n")
    f.write("Advanced Handbook\n")

# Reading the file
with open("example.txt", "r") as f:
    content = f.read()
    print("File content:\n", content)

# Explanation:
# - 'open' opens the file in a specific mode (r/w/a)
# - 'with' is a context manager that handles cleanup

# ===============================
# 9. LIST COMPREHENSIONS
# ===============================

numbers = [1,2,3,4,5]

# Basic list comprehension
squares = [x**2 for x in numbers]
print("Squares:", squares)

# Conditional list comprehension (filter even numbers)
evens = [x for x in numbers if x % 2 == 0]
print("Even numbers:", evens)

# Explanation:
# - List comprehensions are compact, readable loops
# - The 'if' condition filters elements inline

# ===============================
# 10. GENERATORS (Memory Efficient)
# ===============================

def generate_numbers(n):
    """Generator yields numbers one at a time"""
    for i in range(n):
        yield i  # Pauses function, returns one value at a time

# Using the generator
for num in generate_numbers(5):
    print("Generated number:", num)

# Why generators?
# - Don't create the whole list in memory
# - Useful for large datasets
# - Yield keeps function state between calls

# ===============================
# 11. DECORATORS (Adding Behavior)
# ===============================

def decorator(func):
    """Decorator that prints before and after function"""
    def wrapper(*args, **kwargs):
        print("Before function call")   # Runs before original function
        result = func(*args, **kwargs)  # Call original function
        print("After function call")    # Runs after original function
        return result
    return wrapper

@decorator
def say_hello(name):
    print(f"Hello {name}")

say_hello("Alice")

# Explanation:
# - Decorators wrap a function to extend behavior
# - '@decorator' is syntactic sugar for: say_hello = decorator(say_hello)
# - Useful for logging, authentication, performance timing

# ===============================
# 12. LAMBDA, MAP, FILTER, REDUCE
# ===============================

# Lambda: small anonymous function
square = lambda x: x**2
print("Lambda square:", square(5))

# Map: apply function to all items in a list
squared = list(map(lambda x: x**2, numbers))
print("Map squared:", squared)

# Filter: select items that match condition
even = list(filter(lambda x: x % 2 == 0, numbers))
print("Filter even:", even)

# Reduce: combine all items to single value
from functools import reduce
sum_all = reduce(lambda a,b: a+b, numbers)
print("Reduce sum:", sum_all)

# ===============================
# 13. CONTEXT MANAGERS (with)
# ===============================

# Context managers handle setup and cleanup automatically
with open("example.txt", "r") as f:
    content = f.read()
    print("Context manager read:", content)

# Custom context managers can be created using __enter__ and __exit__

