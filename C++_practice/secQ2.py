import numpy as np
import random
import time # importing necessary modules

def main(): #defining main function
    numpyArray1 = np.random.randint(100, size=10000)
    numpyArray2 = np.random.randint(100, size=10000) # creating numpy arrays with random data
    list1 = []
    for i in range(10000):
        list1.append(random.randint(1, 100))
    list2 = []
    for i in range(10000):
        list2.append(random.randint(1, 100)) # creating lists with random data
    # startTimeForNumpyArrays = 0
    # endTimeForNumpyArrays = 0
    # startTimeForNumpyArrays = time.time()
    # (numpyArray1+numpyArray2)
    # endTimeForNumpyArrays = time.time() # calculating time taken by numpy arrays to perform the operation
    # timeTakenToAddNumpyArrays = (endTimeForNumpyArrays-startTimeForNumpyArrays)
    # startTimeForLists = 0
    # endTimeForLists = 0
    # startTimeForlists = time.time()
    # (list1+list2)
    # endTimeForlists = time.time() # calculating time taken by lists to perform the operation
    # timeTakenToAddLists = (endTimeForlists-startTimeForlists)
    # if(timeTakenToAddNumpyArrays>timeTakenToAddLists):
    #     print("Numpy arrays are faster")
    # elif(timeTakenToAddNumpyArrays<timeTakenToAddLists):
    #     print("Lists are faster") # checking which does the operation faster

main()