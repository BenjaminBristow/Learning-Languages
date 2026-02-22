# polymorphism_basic_concept

# The word "polymorphism" means:
# "Many forms"

# In programming, polymorphism means:
# Different objects can respond to the same method name,
# but each object can behave differently.

# Example:

class Dog:
    def speak(self):
        print("Dog says woof")

class Cat:
    def speak(self):
        print("Cat says meow")

# Notice:
# Both classes have a method called speak().
# But they behave differently.

dog = Dog()
cat = Cat()

dog.speak()
cat.speak()

# This is polymorphism.
# Same method name → different behavior.



# polymorphism_with_inheritance

# Often polymorphism is used with inheritance.

class Animal:
    def speak(self):
        # This is a general method.
        # It may be overridden in child classes.
        print("Animal makes a sound")

class Dog(Animal):
    def speak(self):
        # This overrides the parent version.
        print("Dog barks")

class Cat(Animal):
    def speak(self):
        print("Cat meows")

# All of these are Animal types.
animals = [Dog(), Cat(), Animal()]

for animal in animals:
    # We do not care what type it is.
    # We just call speak().
    animal.speak()

# This works because of polymorphism.
# Python automatically calls the correct version.



# duck_typing_polymorphism

# Python uses something called "duck typing".

# The idea:
# "If it walks like a duck and quacks like a duck,
# then it is a duck."

# In other words:
# Python does NOT care about the class type.
# It only cares whether the object has the method.

class Dog:
    def speak(self):
        print("Woof")

class Car:
    def speak(self):
        print("Beep")

def make_it_speak(thing):
    # This function does NOT check type.
    # It assumes the object has a speak() method.
    thing.speak()

dog = Dog()
car = Car()

make_it_speak(dog)
make_it_speak(car)

# Car is NOT an Animal.
# But it still works because it has speak().
# That is duck typing.



# operator_overloading_polymorphism

# Polymorphism also works with operators.

# Example:
# The + operator behaves differently
# depending on what objects you use.

print(5 + 3)          # Adds numbers
print("Hi " + "Bob")  # Combines strings
print([1,2] + [3,4])  # Combines lists

# Same operator.
# Different behavior.
# That is polymorphism.

# We can create our own operator behavior.

class Book:
    def __init__(self, pages):
        self.pages = pages

    def __add__(self, other):
        # Define what + means for Book objects
        return self.pages + other.pages

book1 = Book(100)
book2 = Book(200)

print(book1 + book2)

# __add__ controls the + operator.
# This is operator overloading.
# It is a form of polymorphism.



# method_overriding_and_super

# Method overriding happens when
# a child class replaces a method
# from its parent class.

class Animal:
    def speak(self):
        print("Generic animal sound")

class Dog(Animal):
    def speak(self):
        # Override parent version
        print("Dog barks")

class Cat(Animal):
    def speak(self):
        # Sometimes we want BOTH behaviors.
        super().speak()  # Call parent method
        print("Cat meows")

dog = Dog()
cat = Cat()

dog.speak()
cat.speak()

# super() allows access to parent class methods.



# polymorphism_without_inheritance

# Polymorphism does NOT require inheritance.

class EmailNotifier:
    def send(self, message):
        print("Sending email:", message)

class SMSNotifier:
    def send(self, message):
        print("Sending SMS:", message)

class PushNotifier:
    def send(self, message):
        print("Sending push notification:", message)

def notify(notifier, message):
    # This function does not care
    # what kind of notifier it is.
    notifier.send(message)

email = EmailNotifier()
sms = SMSNotifier()
push = PushNotifier()

notify(email, "Hello")
notify(sms, "Hello")
notify(push, "Hello")

# Same function call.
# Different behavior.
# That is polymorphism in real systems.