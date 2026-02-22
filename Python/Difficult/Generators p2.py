# A generator is a shortcut for creating an iterator.

def count_up_to(max_number):

    current = 0

    while current < max_number:
        current += 1

        # yield pauses the function
        # and returns the value
        yield current


# Using the generator
for number in count_up_to(3):
    print(number)

# Python automatically creates:
# __iter__()
# __next__()
# StopIteration handling

# Generators are memory-efficient
# because they generate values one at a time.