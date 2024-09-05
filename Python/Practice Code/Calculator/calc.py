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

    def equation(self, operand: int, number1: int , number2: int, answer1: int):
        print(f"{number1} {operand} {number2} = {answer1}")

obj = Calculator()
answer = 0
print("Hello welcome to the calculator what operation would you like to perform?, enter either +, -,*, /.")
operation: int = input()
print("Please enter the first number: ")
option1: int = input()
print("Now pick a second number")
option2: int = input()

if(operation == "+"):
    answer = obj.add(int(option1), int(option2))
    obj.equation(operation, int(option1), int(option2), (int(answer)))
elif(operation == "-"):
    answer = obj.subtract(option1, int(option2))
    obj.equation(operation, int(option1), int(option2), (int(answer)))
elif(operation == "/"):
    answer = obj.divide(option1, int(option2))
    obj.equation(operation, int(option1), int(option2), (int(answer)))
elif(operation == "*"):
    answer = obj.multiply(int(option1), int(option2))
    obj.equation(operation, int(option1), int(option2), (int(answer)))
elif(answer != '+' or '/' or '*' or '/'):
    print("Error invalid option printed ")
else:
    print("Error invalid option printed ")
