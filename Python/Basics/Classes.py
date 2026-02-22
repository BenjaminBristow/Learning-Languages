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



# Inheritance allows a new class to use features of an existing class
# A parent class defines common behavior

class Animal:

    def speak(self):
        print("Animal makes a sound")


# A child class inherits from Animal
class Dog(Animal):

    # This replaces the parent version
    def speak(self):
        print("Dog barks")


dog = Dog()
dog.speak()


# super() calls the parent method

class Cat(Animal):

    def speak(self):
        super().speak()  # Call Animal's speak
        print("Cat meows")


cat = Cat()
cat.speak()