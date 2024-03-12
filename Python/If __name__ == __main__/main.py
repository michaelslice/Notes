'''

@note __name__ is a special built in variable that holds the name of the current 
module. 

@note if __name__ == '__main__' is used to include code that should only run 
when the script is executed directly as the main program, but not when it is 
imported as a module into another script.

THIS IS A SCRIPT THAT IS SUPPOSED TO BE RUN

'''

def main():
    return 12

if __name__ == '__main__':
    main()