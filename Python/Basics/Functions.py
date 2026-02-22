# A function is reusable code

# Defining a function
def greet():
    print("Hello!")

# Calling the function
greet()

# Function with parameters
def greet_person(name):
    print("Hello", name)

greet_person("Alice")

# Function that returns a value
def add(a, b):
    return a + b  # return sends a result back

result = add(5, 3)
print(result)