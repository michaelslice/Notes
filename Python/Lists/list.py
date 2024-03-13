
data = [1, 2, 3, 4, 5, 6, 7, 10]

test = [ num for num in range(1, 21)]

print(data[-1]) # Negative index starts from last 

# The beginning value is inclusive, but the ending value is exclusive so really
# its from index 1 to index 3 
print(data[2:4]) #Syntax for slicing start:end:step

print(test[1:4])