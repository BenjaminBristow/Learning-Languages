# When you write:
# for x in something:
# Python secretly uses an ITERATOR.

# Let's build one manually.

class Counter:

    def __init__(self, max_number):
        # Store maximum number
        self.max_number = max_number
        self.current = 0

    def __iter__(self):
        # __iter__ must return an iterator object
        return self

    def __next__(self):
        # This is called each loop

        if self.current < self.max_number:
            self.current += 1
            return self.current
        else:
            # Required to stop loop
            raise StopIteration


counter = Counter(3)

for number in counter:
    print(number)

# A for-loop repeatedly calls:
# 1) iter(counter)
# 2) next(counter)
# Until StopIteration is raised.