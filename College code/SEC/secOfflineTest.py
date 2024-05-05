# Q1

import seaborn as sns
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import accuracy_score, precision_score, recall_score, f1_score

# Load the penguins dataset using seaborn
penguins_data = sns.load_dataset("penguins")

# Select features and target variable
features = ["bill_length_mm", "bill_depth_mm", "flipper_length_mm", "body_mass_g"]
target = "species"

# Separate features and target
X = penguins_data[features]
y = penguins_data[target]

# Encode categorical target variable
from sklearn.preprocessing import LabelEncoder
encoder = LabelEncoder()
y_encoded = encoder.fit_transform(y)

# Split data into training and testing sets
X_train, X_test, y_train_encoded, y_test = train_test_split(X, y_encoded, test_size=0.2, random_state=42)

# Standardize features (optional but recommended)
scaler = StandardScaler()
X_train_scaled = scaler.fit_transform(X_train)
X_test_scaled = scaler.transform(X_test)

# Create the logistic regression model with L2 regularization
model = LogisticRegression(solver="liblinear", C=1.0, random_state=42)  # Adjust 'C' for regularization strength

# Train the model
model.fit(X_train_scaled, y_train_encoded)

# Make predictions on the test set
y_pred = model.predict(X_test_scaled)
y_pred_decoded = encoder.inverse_transform(y_pred)  # Decode predictions back to species names

# Evaluate model performance
accuracy = accuracy_score(y_test, y_pred)
precision = precision_score(y_test, y_pred, average='weighted')
recall = recall_score(y_test, y_pred, average='weighted')
f1 = f1_score(y_test, y_pred, average='weighted')

print("Accuracy:", accuracy)
print("Precision:", precision)
print("Recall:", recall)
print("F1-score:", f1)

# Predict species for a new data point (example)
# Replace this with your own data for prediction
new_penguin = pd.DataFrame({
    "bill_length_mm": [176],
    "bill_depth_mm": [10],
    "flipper_length_mm": [211],
    "body_mass_g": [3750]
})
new_penguin_scaled = scaler.transform(new_penguin)  # Scale the new data if standardization was used
predicted_species = encoder.inverse_transform(model.predict(new_penguin_scaled))[0]
print(f"Predicted species for the new penguin:", predicted_species)

# Q2

import sqlite3

# Connect to the database (or create it if it doesn't exist)
conn = sqlite3.connect('College.db')

# Create a cursor object
cursor = conn.cursor()

# Create the STUDENT table (if it doesn't exist already)
cursor.execute('''CREATE TABLE IF NOT EXISTS STUDENT
                  (rollNumber INTEGER PRIMARY KEY,
                   studName TEXT NOT NULL,
                   class TEXT NOT NULL)''')

print("STUDENT table created successfully (if it didn't exist)!")

# Close the connection (recommended practice)
conn.close()

# Q3
import pandas as pd

# Create the first DataFrame (Village/Sector and Pincode)
df_address1 = pd.DataFrame({
    "Village/Sector": ["A1", "B2", "C3", "D4", "D5", "E6", "F7", "G8", "H9", "J10"],
    "Pincode": [110001, 110002, 110003, 110004, 110005, 110006, 110007, 110008, 110009, 110010]
})

# Create the second DataFrame (Pincode, City, and State)
df_address2 = pd.DataFrame({
    "Pincode": [110001, 110004, 110003, 110004, 110005, 110006, 110007, 110008, 110009, 110010],
    "City": ["aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj"],
    "State": ["11", "22", "33", "44", "55", "66", "77", "88", "99", "1010"]
})

# Merge the DataFrames based on the common 'Pincode' column (inner join)
def create_complete_address_df(df_address1, df_address2):
  df_complete_address = pd.merge(df_address1, df_address2, on='Pincode', how='inner')
  return df_complete_address

# Create the complete address DataFrame
df_complete_address = create_complete_address_df(df_address1.copy(), df_address2.copy())

# Print the resulting DataFrame
print(df_complete_address)

# Q4
print(df_complete_address[df_complete_address["Pincode"]%2==0])

# Q5
import pandas as pd
import numpy as np

# Generate random data with different ranges for each category
categories = ["A", "B", "C"]
num_datapoints = 50  # Adjust this for the desired number of data points

data = []
for category in categories:
  if category == "A":
    # Generate X and Y values within a specific range for category A
    X_A = np.random.rand(num_datapoints) * 5  # X between 0 and 5
    Y_A = np.random.rand(num_datapoints) * 3  # Y between 0 and 3
  elif category == "B":
    # Generate X and Y values within a specific range for category B
    X_B = np.random.rand(num_datapoints) * 8 + 2  # X between 2 and 10
    Y_B = np.random.rand(num_datapoints) * 5 + 2  # Y between 2 and 7
  else:
    # Generate X and Y values within a specific range for category C
    X_C = np.random.rand(num_datapoints) * 3 + 5  # X between 5 and 8
    Y_C = np.random.rand(num_datapoints) * 2 + 4  # Y between 4 and 6

  # Combine data for each category into separate DataFrames
  df_temp = pd.DataFrame({
      "X": X_A if category == "A" else (X_B if category == "B" else X_C),
      "Y": Y_A if category == "A" else (Y_B if category == "B" else Y_C),
      "Category": [category] * num_datapoints
  })

  # Append data from each category to the main list
  data.append(df_temp)

# Combine all DataFrames into a single DataFrame
df = pd.concat(data, ignore_index=True)

# Print the resulting DataFrame (optional)
# print(df)

# You can now use this DataFrame for your Seaborn visualization
import seaborn as sns

sns.scatterplot(x="X", y="Y", hue="Category", data=df)
sns.title("Scatter Plot with Color-Coded Categories")
sns.show()