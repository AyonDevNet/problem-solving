# Student Grade Analyzer — Write a program that takes a list of student 
# scores, and:

# Counts how many students passed (score 50 and above)
# Counts how many students failed (below 50)
# Finds the highest score
# Finds the lowest score
# Calculates the average score

# pythonscores = [45, 78, 23, 89, 56, 12, 67, 90, 34, 55]
# Expected Output:
# Passed  : 6
# Failed  : 4
# Highest : 90
# Lowest  : 12
# Average : 54.9


scores = [45, 78, 23, 89, 56, 12, 67, 90, 34, 55]

passed = 0
failed = 0
highest = scores[0]
lowest = scores[0]
total = 0

for score in scores:
    # count passed and failed
    if score >= 50:
        passed = passed + 1
    else:
        failed = failed + 1

    # find highest
    if score > highest:
        highest = score

    # find lowest
    if score < lowest:
        lowest = score

    # add to total
    total = total + score

average = total / len(scores)

print("Passed  :", passed)
print("Failed  :", failed)
print("Highest :", highest)
print("Lowest  :", lowest)
print("Average :", average)