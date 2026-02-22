# IMMUTABLE OBJECTS:
# int, float, string, tuple
# These CANNOT change after creation.

a = 10
b = a

# Change a
a = 99

# b does NOT change.
# Because integers are immutable.
# Python created a NEW integer object 99.
print("a:", a)
print("b:", b)


# MUTABLE OBJECTS:
# list, dict, set
# These CAN change in memory.

list1 = [1, 2, 3]
list2 = list1

# Modify list1
list1.append(4)

# Both changed.
# Because append() modified the SAME object in memory.
print("list1:", list1)
print("list2:", list2)

# To create a separate copy:
list3 = list1.copy()

list1.append(5)

print("list1:", list1)
print("list3:", list3)

# list3 does not change now.
# Because copy() created a new object.