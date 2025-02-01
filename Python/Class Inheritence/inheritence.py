# Class Inheritence
# Syntax: Class DerivedClassName(BaseClassName):
# Statement1



class Bumtopia():
    def func():
        return"Yo"
    
# Method references are resolved as follows, the corresponding class attribute
# is search, descending down the chain of base classes if necessary, and the
# method reference is valid if this yields a function object
class Idiot(Bumtopia): # Idiot inherits from Bumtopia
    def yo():
        return "gang"
    
# Build-in Functions for Inheritence
# isinstance(): To check an instance type isinstance(obj, int) will be True only if obj.__class__ is int
# issubclass(): To check class inheritence 


# Multiple Inheritence
# Syntax: class DerivedClass(Base1, Base2, Base3):
# Statement


# Private Variables
# There is no such thing as private in python, but there is a convention
# Names starting with _variable, should be treated as non public data
# Name Mangling: Applying double underscore to a variable signifies that 
# a variable should not be accessed outside the class, __variable