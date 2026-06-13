import json

# --- Writing data to a file ---
settings = {"theme": "dark", "volume": 80, "autosave": True}

with open("config.json", "w") as file:
    json.dump(settings, file, indent=4)

# --- Reading data from a file ---
with open("config.json", "r") as file:
    loaded_settings = json.load(file)

print(loaded_settings["theme"])  # Output: dark
