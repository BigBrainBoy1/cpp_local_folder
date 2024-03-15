import pandas as pd
import numpy as np

# a. Create a series from a dictionary and display sorted by index and values
print("a.")
data = {'XII': 25, 'XI': 30, 'X': 50}
series = pd.Series(data)

# Print the series sorted by index (default sorting)
print("Series sorted by index:")
print(series)

# Print the series sorted by values in descending order
print("\nSeries sorted by values :")
print(series.sort_values)  # sort descending

# b. Create a series from a random numpy array, find min/max values and positions
print("\nb.")
random_data = np.random.randint(1, 100, 10)
random_series = pd.Series(random_data)

print("Random Series:")
print(random_series)

# Get the maximum value and its index (position)
print("\nMaximum value:", random_series.max())
print("Position of maximum value:", random_series.idxmax())

# Get the minimum value and its index (position)
print("\nMinimum value:", random_series.min())
print("Position of minimum value:", random_series.idxmin())

# c. Create a series with day of week and temperature
print("c.")
data = {'Monday': 25, 'Tuesday': 40, 'Wednesday': 18, 'Thursday': 27,
        'Friday': 32, 'Saturday': 39, 'Sunday': 28}
temp_series = pd.Series(data, index=data.keys())  # Set days of week as index

print("Temperature Series:")
print(temp_series)

# Access temperature on the 4th day (index position 3)
print("\nTemperature on 4th day:", temp_series.iloc[3])

# Access temperature on Tuesday using label indexing
print("Temperature on Tuesday:", temp_series['Tuesday'])

# d. Create dataframes for class X sections A and B
print("d.")
data_A = {'Name': ['Aroma', 'Kiran', 'Rayan', 'Rohan', 'Amit', 'Yash', 'Mona', 'Kartik', 'Kavita', 'Pooja'],
         'Percentage': [79.5, 29.0, 90.5, np.nan, 32.0, 65.0, 56.0, np.nan, 29.0, 89.0],
         'Qualify': ['yes', 'no', 'yes', 'no', 'no', 'yes', 'yes', np.nan, 'no', 'Nan']}
df_A = pd.DataFrame(data_A)

data_B = {'Name': ['Parveen', 'Ahil', 'Shaila', 'Shruti', 'Mark'],
         'Percentage': [89.5, 92.0, 90.5, 91.5, 90.0],
         'Qualify': ['yes', 'yes', 'yes', 'yes', 'yes']}
df_B = pd.DataFrame(data_B)

# e. Merge dataframes for class X results
print("e.")
df_combined = pd.concat([df_A, df_B])
print("Combined DataFrame:")
print(df_combined)

# f. Filter students with 80% and above and count missing data
print("f.")
filtered_df = df_combined[df_combined['Percentage'] >= 80]
missing_count = df_combined.isna().sum()

print("Students with 80% and above:")
print(filtered_df)
print("\nCount of missing data in each column:")
print(missing_count)