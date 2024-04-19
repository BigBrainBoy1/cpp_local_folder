import pandas as pd
import seaborn as sns

# a. Load the dataset
penguins_data = sns.load_dataset("penguins")

# b. Number of observations and attributes
num_observations = penguins_data.shape[0]
num_attributes = penguins_data.shape[1]

print(f"Number of observations (records): {num_observations}")
print(f"Number of attributes: {num_attributes}")

# c. Display names, indexes, and data types
print("\nDataframe information:")
print(penguins_data.info())

# d. Display first and last 5 records
print("\nFirst 5 records:")
print(penguins_data.head())

print("\nLast 5 records:")
print(penguins_data.tail())

# e. Value of second column for 3rd and 4th records
second_column_name = penguins_data.columns[1]
third_record_value = penguins_data.iloc[2, 1]
fourth_record_value = penguins_data.iloc[3, 1]

print(f"\nValue of '{second_column_name}' for 3rd record:", third_record_value)
print(f"Value of '{second_column_name}' for 4th record:", fourth_record_value)

# f. Summary of data distribution
print("\nSummary of data distribution:")
print(penguins_data.describe())

# g. Pairwise correlation
correlation_matrix = penguins_data.corr()
print("\nPairwise correlation matrix:")
print(correlation_matrix)