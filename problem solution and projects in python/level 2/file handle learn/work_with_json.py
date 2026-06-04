import json

#serialization using json
#it is basically convert the python code with json formatte


# L = [1, 2, 4, 5]

# with open('demo.json', 'w') as f:
#     json.dump(L,f)



d = {
    'name': 'nitish',
    'age': 33,
    'gender': 'male'
}

with open('demo2.json', 'w') as f:
    json.dump(d, f, indent=4)