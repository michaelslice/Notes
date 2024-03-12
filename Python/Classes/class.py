class Practice:
    i = 12 # class attribute, available everywhere in the class

    # Constructor
    # Automatically called when a object of Practice is called
    # self is a reference to the current instance of the class
    def __init__(self, y, z, w): 
        # instance variable self.x
        self.x = y
        self.i = z
        self.__private_var = w # Variables with __ are made private

    def get_private_var(self):
        return self.__private_var

    def func(self): # Instance method
        i = self
        print(i)
        return i
    
obj1 = Practice()

Practice.func(12)