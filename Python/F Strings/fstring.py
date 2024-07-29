test = "123456"

year = 2016
event = "Christmas"
print (f"The year is {year}")

# Str Format Method
# Str format requires manually specifying the formatting
yes_votes = 42_572_654
total_votes = 85_705_149
percentage = yes_votes / total_votes
'{:-9} YES votes  {:2.2%}'.format(yes_votes, percentage)
' 42572654 YES votes  49.67%'



# Passing an integer after the ":" will cause that field to be 
# a minimum number of characters wide
table = {'Sjoerd': 4127, 'Jack': 4098, 'Dcab': 7678}
for name, phone in table.items():
    print(f'{name:10} ==> {phone:10d}')

# The = specifier can be used to expand 
# an expression to the text of the expression, 
# an equal sign, then the representation of the evaluated expression:
bugs = 'roaches'
count = 13
area = 'living room'
print(f'Debugging {bugs=} {count=} {area=}')
# Debugging bugs='roaches' count=13 area='living room'


# The String Format Method
print('We are the {} who say "{}!"'.format('knights', 'Ni'))
# We are the knights who say "Ni!"

# The brackets and characters within them 
# (called format fields) are replaced with 
# the objects passed into the str.format() 
# method. A number in the brackets can be 
# used to refer to the position of the 
# object passed into the str.format() method.

