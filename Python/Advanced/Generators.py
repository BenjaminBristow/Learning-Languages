# Normally, a function returns ONE value and then stops.

# A generator can return multiple values over time using yield.

def count_up_to(max_number):

    number = 1

    while number <= max_number:

        yield number
        # yield pauses the function
        # It remembers where it stopped

        number += 1


# Using the generator
for value in count_up_to(5):
    print(value)


# Important difference:
# List stores everything in memory
numbers_list = [x for x in range(1000000)]

# Generator does NOT store everything at once
numbers_generator = (x for x in range(1000000))

# Generators are more memory efficient