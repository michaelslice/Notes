# Sets get { }
set = {1, 2, 3, 4, 5, "test"}

set.add(12)
len(set)
set.remove("test")

for i in set:
    print(i)

# Every value of the array will be passed in using *args
# *args can be used to pass in a tuple of arguements 
def func(*args): 
    print(args)

func(1, 2, 3, 4, 5, 6)