# Python version of scores program in C

### VERSION 1 ###
# Average of three numbers using a list
# Using python built-in functions sum and len
# scores = [15, 20, 36]
# average = sum(scores) / len(scores)
# print("Average: ", average)

### VERSION 2 ###
# Averages three numbers using a list and a loop
# Here we use loop to ask user input numbers for list scores and then append scores
# from cs50 import get_int
# # making an empty list
# scores = []
# # using range to ask user input of 3 numbers
# for i in range(3):
#     # score becomes the input value 
#     score = get_int("Score: ")
#     # appending scores with values of score
#     # scores.append(score)
# average = sum(scores) / len(scores)
# print("Average: ", average)


### VERSION 3 ###
# Averages three numbers using a list and a loop with + operator
# from cs50 import get_int
# # Get scores
# scores = []
# for i in range(3):
#     score = get_int("Score: ")
#     # we use + operator to join lists scores with [score]
#     scores += [score] # in other words, scores = scores + [score]
# # Print average
# average = sum(scores) / len(scores)
# print(f"Average: {average}")