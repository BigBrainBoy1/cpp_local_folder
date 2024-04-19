import pandas as pd
import numpy as np

# a. Create dataframe with random numeric values
np.random.seed(10)  # Set seed for reproducibility
data = np.random.rand(30, 6)  # 30 rows, 6 columns, random values between 0 and 1
df = pd.DataFrame(data, columns=list(map(chr, range(65, 71))))  # Column names A to F

# b. Replace 20 values with null at random indexes
num_null_values = 20
null_indexes = np.random.choice(df.size, num_null_values, replace=False)  # Unique random indexes
df.iloc[null_indexes] = np.NAN

# c. Number of missing values in each attribute
missing_counts = df.isnull().sum()
print("\nNumber of missing values in each attribute:")
print(missing_counts)

# d. Remove rows with more than 70% missing values
threshold = 0.7 * df.shape[1]  # 70% of total columns
df.dropna(thresh=threshold, inplace=True)  # Remove rows with more than 'threshold' missing values

# e. Normalize attributes (0 to 1 range)
normalized_df = (df - df.min()) / (df.max() - df.min())

print("\nNormalized dataframe:")
print(normalized_df)