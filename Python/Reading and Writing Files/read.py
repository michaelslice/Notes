# Open returns a a file object, and is most commonly 
# used with two positional arguements
# open(filename, mode, encoding=None)
# @param: Can be "r"(read), "w"(write), "a"(appending), "r+"(appending)
f = open('Finance_data.csv', 'w', encoding="utf-8")

# Best practice for opening and file and reading from it
with open('Finance_data.csv', 'w', encoding="utf-8") as f:
    read_data = f.read() # This is the entire file 
    line = f.readline() # This reads a single line

    f.write("This is a test\n") # Writes text to a file and, returns number of bytes written

    value =("Answer", 3)
    s = str(value) # Convert the value to a string
    f.write(s)

    number = '123'
    num = int(number) # Convert number to a int

f.closed()

