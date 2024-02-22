# Q1 (a)
listOfAges = [] # initializing an empty list
for i in range (10): # running the loop 10 times
    print("Enter age of student ", i+1)
    x = int(input()) # taking input of age
    listOfAges.append(x) # storing age in the list
sumOfAges = 0
for i in range(10):
    sumOfAges += listOfAges[i] # calculating the sum of ages to calculate average age
avgAge = ((float(sumOfAges))/10.0) # calculating average age
print("Average age among ", listOfAges, " is ", avgAge) # printing average age

# Q1 (b)
fruits = ["Apple", "Mango", "Peach", "Banana"]
prices = [100, 80, 150, 70]
dict1 = {} # initializing an empty dictionary
for keys in fruits:
      for values in prices:
            dict1[keys] = values # entering value in dictionary where the keys are from the list 'fruits' and values are from the list 'prices'
print("Resultant dictionary : ", dict1) # printing the dictionary