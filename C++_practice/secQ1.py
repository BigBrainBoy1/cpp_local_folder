# Jiheershu     MAT/22/66       Bsc.(H) Mathematics

# Q1 (a)
listOfAges = []
for i in range (10):
    print("Enter age of student ", i+1)
    x = int(input())
    listOfAges.append(x)
sumOfAges = 0
for i in range(10):
    sumOfAges += listOfAges[i]
avgAge = ((sumOfAges)/10)
print("Average age among ", listOfAges, " is ", avgAge)

# Q1 (b)
fruits = ["Apple", "Mango", "Peach", "Banana"]
prices = [100, 80, 150, 70]
dict1 = {}
for keys in fruits:
      for values in prices:
            dict1[keys] = values
print("Resultant dictionary : ", dict1)