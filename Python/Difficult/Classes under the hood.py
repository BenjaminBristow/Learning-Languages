# Classes are actually created using the built-in function "type".

class Dog:

    def __init__(self, name):
        # self refers to the object being created
        self.name = name

    def speak(self):
        print(self.name, "says woof")


dog1 = Dog("Buddy")
dog1.speak()


# What Python is really doing behind the scenes:

Dog2 = type(
    "Dog2",              # Class name
    (),                  # Parent classes (empty tuple = no inheritance)
    {
        "__init__": lambda self, name: setattr(self, "name", name),
        "speak": lambda self: print(self.name, "says woof")
    }
)

dog2 = Dog2("Max")
dog2.speak()

# This proves:
# Classes are objects.
# Functions are objects.
# Everything in Python is an object.

