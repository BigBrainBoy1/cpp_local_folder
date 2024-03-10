# Jiheershu     MAT/22/66

import numpy as np

# a. Create a 5X2 integer array with elements in the range 50 to 100
arr_a = np.arange(50, 100, 5).reshape(5, 2)
print("a. Resultant array:\n", arr_a)
print("Reshaped array:\n",arr_a.reshape(10, 1))

# b. Create a 1D random array and compute various statistics
arr_b = np.random.randint(1, 101, size=10)
print("\nb. Random array:", arr_b)
print("Minimum value:", np.min(arr_b))
print("Maximum value:", np.max(arr_b))
print("Mean:", np.mean(arr_b))
print("Median:", np.median(arr_b))
print("Standard deviation:", np.std(arr_b))
unique_values, counts = np.unique(arr_b, return_counts=True)
print("Unique values:", unique_values)
print("Count of unique values:", counts)

# c. Add two 2D arrays and calculate the square root of each element
arr_c1 = np.random.randint(1, 11, size=(3, 3))
arr_c2 = np.random.randint(1, 11, size=(3, 3))
print("\nc. First array:\n", arr_c1)
print("Second array:\n", arr_c2)
result_c = np.sqrt(arr_c1 + arr_c2)
print("Resultant array after square root operation:\n", result_c)

# d. Operations on the given array intArray
intArray = np.array([[34, 43, 73], [82, 22, 12], [53, 94, 66]])
print("\nd. Original array:\n", intArray)
# I. Delete the second column of the array
intArray_deleted_col = np.delete(intArray, 1, axis=1)
print("I Array after deleting the second column:\n", intArray_deleted_col)
# II. Sort the array by the second row
intArray_sorted_row = intArray[:, intArray[1].argsort()]
print("II Array sorted by the second row:\n", intArray_sorted_row)
# III. Sort the array by second column
intArray_sorted_col = intArray[intArray[:, 1].argsort()]
print("III Array sorted by the second column:\n", intArray_sorted_col)
# IV. Find row-wise maximum element
print("IV Row-wise maximum elements:", np.max(intArray, axis=1))
# V. Find column-wise maximum element
print("V Column-wise maximum elements:", np.max(intArray, axis=0))
# VI. Swap the first two columns of the array
intArray_swapped_col = intArray[:, [1, 0, 2]]
print("VI Array after swapping the first two columns:\n", intArray_swapped_col)
# VII. Retrieve all the even numbers from the array
even_numbers = intArray[intArray % 2 == 0]
print("VII Even numbers from the array:", even_numbers)
  
# e. Create an identity matrix of size 5x5 with all the diagonal elements set to 5
identity_matrix = 5 * np.eye(5)
print("\ne. Identity matrix with diagonal elements set to 5:\n", identity_matrix)