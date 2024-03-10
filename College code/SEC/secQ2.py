# Jiheershu     MAT/22/66

import numpy as np
import time

# Create two numpy arrays with 10,000 elements
numpyArr1 = np.random.rand(10000)  # Create a numpy array with 10,000 random elements
numpyArr2 = np.random.rand(10000)  # Create another numpy array with 10,000 random elements

# Create two lists with 10,000 elements
list1 = list(numpyArr1)  # Convert the first numpy array to a Python list
list2 = list(numpyArr2)  # Convert the second numpy array to a Python list

# Measure the storage size of numpy arrays and lists
numpyArr1Size = (numpyArr1.nbytes)  # Get the size of the first numpy array in bytes
numpyArr2Size = (numpyArr2.nbytes)  # Get the size of the second numpy array in bytes
list1Size = len(list1) * 8  # Assuming each element takes 8 bytes (float64)
list2Size = len(list2) * 8  # Assuming each element takes 8 bytes (float64)

# Print the storage size of numpy arrays and lists
print("Storage size of numpy array 1:", numpyArr1Size, "bytes")
print("Storage size of numpy array 2:", numpyArr2Size, "bytes")
print("Storage size of list 1:", list1Size, "bytes")
print("Storage size of list 2:", list2Size, "bytes")

# Measure the time taken to sum numpy arrays
startTime = time.time()  # Get the current time
resultNumpy = numpyArr1 + numpyArr2  # Sum the numpy arrays
numpyTime = time.time() - startTime  # Calculate the time taken

# Measure the time taken to sum lists
startTime = time.time()  # Get the current time
result_list = [a + b for a, b in zip(list1, list2)]  # Sum the lists element-wise using list comprehension
listTime = time.time() - startTime  # Calculate the time taken

# Print the time taken to sum numpy arrays and lists
print("Time taken to sum numpy arrays:", numpyTime, "seconds")
print("Time taken to sum lists:", listTime, "seconds")
