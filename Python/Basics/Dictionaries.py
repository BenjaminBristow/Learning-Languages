# A dictionary stores data as key-value pairs

person = {
    "name": "Alice",
    "age": 25,
    "city": "New York"
}

# Accessing values
print(person["name"])
print(person["age"])

# Adding new key-value pair
person["job"] = "Engineer"
print(person)

# Looping through dictionary
for key in person:
    print(key, ":", person[key])