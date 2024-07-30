import sys

# This program can be used as: python demo.oy one two three 
print (sys.argv)
# Printed as 'demo.py' 'one' 'two' 'three'

# Error Output Redirection and Program Termination
# The sys module also has attributes for stdin, stdout, and stderr. 
# The latter is useful for emitting warnings and error messages to make them 
# Visible even when stdout has been redirected
sys.stderr.write("Warning, log file not found starting a new one")
