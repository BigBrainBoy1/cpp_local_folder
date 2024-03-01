import numpy as np
import random

numpyArray1 = np.random.randint(100, size=10000)
numpyArray2 = np.random.randint(100, size=10000)
list1 = []
for i in range(10000):
    list1.append(random.randint(1, 100))
list2 = []
for i in range(10000):
    list2.append(random.randint(1, 100))
print(len(numpyArray1))
print(len(numpyArray2))
print(len(list1))
print(len(list2))