# Dictionaries
# Dictionaires are indexed by keys, which can be any immutable type
# Such as strings or numbers, Tuples can be used as keys 
# Dictionaries will have key, value pairs
map = {
    "key1": "Joe",
    "key2": "Bill",
    "key3": "Evan",
    "key4": "Connor",
    "key5": "Ryan",
    "key6": "Zac",
    "key7": "James"
    }

# Access a element in the map by using the key value
print(map["key1"])

# dict(): Can be used to build a dictionary direclty from a sequence of key-value paris

# Looping Techniques for Dictionaires

knights = {'gallahad': 'the pure', 'robin': 'the brave'}
for k, v in knights.items():
    print(k, v)

# gallahad the pure
# robin the brave

# Enumerate
# Can be used to get the position index and corresponding value
for i, v in enumerate(['tic', 'tac', 'toe']):
    print(i, v)

# 0 tic
# 1 tac
# 2 toe

# Sorted
# Can be used to sort a list 
basket = ['apple', 'orange', 'apple', 'pear', 'orange', 'banana']
for i in sorted(basket):
    print(i)

# apple
# apple
# banana
# orange
# orange
# pear

# Set 
# Used to remove dulicate elements
