# Decimal Floating-Point Arithmetic
# The decimal module offers a Decimal datatype for decimal floating-point
# implementation of binary floating point, the class is especilly helpful for

# Financial applications, that require exact deciaml representation
# control precision
# control over rounding to meet legal or regulatory requirements
# tracking of significant decimal places
from decimal import *

round(Decimal('0.70') * Decimal('1.05'), 2)

# The Decimal result keeps a trailing zero, automatically inferring 
# four place significant from multiplicands with two place 
# significance