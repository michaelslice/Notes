# Classes support two kinds of operations
# attribute references: Use the standard syntax (obj.name)
# expression: modname.funcname, modname is a module object and funcname is an attribute of it

# instantiation: Uses function notation, returns a new instance of the class, ex: X = MyClass()
# namespace: Is a mapping from names to objects

# Namespaces are created at different moments and have different lifetimes
# build-in-names: Created when interpreter starts up, and never deleted
# module: In the global name space, will last until the interpreter quits
# top-level invocation: Data read from a script file exist in the module
# __main__ have their own global namespace

# Assignments do not copy data, they just bind names to objects, the same is true
# for deletions

class MyClass:
    i = 23455

    def f(self):
        # Self is a reference to the current instance of the class
        # It is used to access methods and variabls with a class
        return "bum"
    
# __init__(): When a class defines this method, class instantiation automatically invokes __init__() 
# for the newly created class instance 
class Complex:
    def __init__(self, realpart, imagpart) -> None:
        self. r = realpart
        self.i = imagpart

x = Complex(3.0, -4.5)
x.r, x.i

# attribute
# 

