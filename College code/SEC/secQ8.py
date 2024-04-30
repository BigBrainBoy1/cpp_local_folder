import seaborn as sns
import pandas as pd
from sklearn.linear_model import LinearRegression

# Load the mpg dataset using seaborn
mpg_data = sns.load_dataset("mpg")

# Select features (weight, cylinders, displacement) and target (mpg)
features = ["weight", "cylinders", "displacement"]
target = "mpg"

# Create a DataFrame for the selected features and target
X = mpg_data[features]
y = mpg_data[target]

# Create a linear regression model
model = LinearRegression()

# Train the model on the data
model.fit(X, y)

# Print the coefficients (weights) for each feature
print("Coefficients (weights):")
for feature, coef in zip(features, model.coef_):
    print(f"{feature}: {coef:.4f}")

# Print the intercept
print("Intercept:", model.intercept_)

# Make predictions on unseen data (example)
# You can replace this with your own data for prediction
new_car = pd.DataFrame({
    "weight": 3500,
    "cylinders": 6,
    "displacement": 200
})
predicted_mpg = model.predict(new_car)[0]
print(f"\nPredicted MPG for a car with weight {new_car['weight'].values[0]},", 
      f"{new_car['cylinders'].values[0]} cylinders, and", 
      f"{new_car['displacement'].values[0]} displacement:", 
      f"{predicted_mpg:.2f}")