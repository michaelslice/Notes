class Calculator:
    def __init__(self) -> None:
        # Syntax for 'private data members'
        self._number1 = 0
        self._number2 = 0

    # Any class in Python the first arguement is self
    def multiply(self, number1: int , number2: int) -> int: 
        return number1 * number2
    
    def add(self, number1: int , number2: int) -> int: 
        return number1 + number2

    def subtract(self, number1: int , number2: int) -> int: 
        return number1 - number2
    
    def divide(self, number1: int , number2: int) -> int: 
        return number1 / number2

obj = Calculator()
answer: int



print("Hello welcome to the calculator what operation would you like to perform?, enter either +, -,*, /.")
operation: int = input()
print("Please enter the first number: ")
option1: int = input()
print("Now pick a second number")
option2: int = input()


if(operation == "+"):
    answer = obj.add(int(option1), int(option2))
if(operation == "-"):
    answer = obj.subtract(int(option1), int(option2))
if(operation == "/"):
    answer = obj.divide(int(option1), int(option2))
if(operation == "*"):
    answer = obj.multiply(int(option1), int(option2))
else:
    print("Error invalid option printed ")

'''
if(answer != '+' or '/' or '*' or '/'):
    print("Error invalid option printed ")
'''

# f-strings allow for printing like expressions
print(f"{option1} {operation} {option2} = {answer}")