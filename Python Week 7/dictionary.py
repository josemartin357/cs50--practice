# establish data type
words = set()

# defining function name and argument
# checking if word (argument) is in hash table
def check(word):
    # if lowercase version of the word exists in words..
    if word.lower() in words:
        return True
    else:
        return False

# function takes a file name ..
def load(dictionary):
    # .. and open it for reading
  file = open(dictionary, "r")
  # We’ll iterate over the lines in the file
  for line in file:
      # getting a word after removing each line’s newline with rstrip
      word = line.rstrip()
      # adding each word to words set
      words.add(word)
  file.close()
  # returning true because all goes well
  return True

def size():
    # use len to count the number of items in our dictionary
    return len(words)

# for unload, we don’t have to do anything, since Python manages memory for us.
def unload():
    return True