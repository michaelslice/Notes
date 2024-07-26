list = [1, 2, 3, 4, 5]

# All Methods Available on a List

list.append(1)
# Add an item to the end of a list. a[len(a):] = [x]

list.extend(1)   
# Extend the list by appending all the items from the iterable
# a[len(a):] = iterable

list.insert(0, 'x')
# Insert an item at a given position
# First arguement is the index of the element before which to insert
# Second arguement is the item to insert

list.remove('x')
# Remove the firs titem from the list whose value is equal to x
# Returns error if no match

list.pop([i])
# Remove the item at the given position in the list, and return it
# If no index is specified pop removes the last element 

list.clear()
# Remove all items from the list

list.index(x[, start[, end]])
# Return a zero-based index in the list of the 
# first item whose value is equal to x
# Raise a Error if there is no such item
# start, and end refers to slice notation, for 
# limiting the search to a particular part

list.count('x')
# Return the number of times x appears in the list

list.sort(*, key=None, reverse=False)
# Sort the items of the list in place

list.reverse()
# Reverse the elements of the list in place

list.copy()
# Return a shallow copy of the list