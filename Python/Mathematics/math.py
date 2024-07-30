import math

# Math module gives access to the underlying C library functions for 
# floating point math
math.cos(math.pi / 4)

math.log(1024, 2)

# Random module provides tools for making random selections 

import random

random.choice(['apple', 'beer', 'banana'])

random.sample(range(100), 10) # Sampling without replacement

# The statistics module calculates basic statistical properties(the mean, median, variance)
import statistics

data = [2.75, 1.75, 1.25, 0.25, 0.5, 1.25, 3.5]
statistics.mean(data)

statistics.median(data)

statistics.variance(data)
