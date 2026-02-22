from functools import reduce

numbers = [1, 2, 3, 4]

# map() applies a function to each item
squared = list(map(lambda x: x**2, numbers))
print(squared)
# Output: [1, 4, 9, 16]

# filter() keeps items that match condition
evens = list(filter(lambda x: x % 2 == 0, numbers))
print(evens)
# Output: [2, 4]

# reduce() combines items into one value
sum_all = reduce(lambda a, b: a + b, numbers)
print(sum_all)
# Output: 10