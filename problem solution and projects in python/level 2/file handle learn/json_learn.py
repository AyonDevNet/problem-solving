import json

data = {
    "name": "DevNet",
    "age": 25,
    "role": "Network Engineer"
}

json_string = json.dumps(data)

print(json_string["role"])