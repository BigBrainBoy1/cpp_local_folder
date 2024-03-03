# (a)

import numpy as np

# Create a 5x2 array with elements in the range 50 to 100 with a difference of 5
arr = np.arange(50, 100, 5).reshape(5, 2)

# Reshape the array to size 10x1
reshaped_arr = arr.reshape(10, 1)

print("Original array:")
print(arr)
print("\nReshaped array:")
print(reshaped_arr)
