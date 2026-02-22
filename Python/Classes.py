# A class is a blueprint for creating objects

class Person:
    # This runs when a new object is created
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # Method (function inside a class)
    def greet(self):
        print("Hi, my name is", self.name)

# Creating an object
person1 = Person("Alice", 25)

# Accessing data
print(person1.name)

# Calling a method
person1.greet()



# You can create multiple objects from the same class
#Magic (Dunder - Double Underscore) methods allow you to define how objects behave with built-in operations
class Book:

    def __init__(self, title, pages):
        # Runs when object is created
        self.title = title
        self.pages = pages

    def __str__(self):
        # Controls what prints when you do print(object)
        return f"{self.title} has {self.pages} pages"

    def __add__(self, other):
        # Defines behavior for +
        return self.pages + other.pages


book1 = Book("Python", 300)
book2 = Book("Math", 200)

print(book1)          # Calls __str__
print(book1 + book2)  # Calls __add__