nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 16, 18, 19, 20]

# Shorter way to write a for loop
# [expr for val in collection]
evens = [num for num in nums if num % 2 == 0]

print(evens)