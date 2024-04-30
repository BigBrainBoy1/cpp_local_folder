from sklearn.datasets import load_iris
import matplotlib.pyplot as plt
import seaborn as sns

# Load the Iris dataset
iris = load_iris()

# (a) Scatter plot (petal length vs petal width)
plt.figure(figsize=(8, 6))
sns.scatterplot(
    x=iris.data[:, 2],  # petal length
    y=iris.data[:, 3],  # petal width
    hue=iris.target,  # color based on target variable (flower type)
    palette="Set3",  # color palette for different flower types
    data=iris,
    style=iris.target_names,  # labels for data points based on flower type
)
plt.xlabel("Petal Length (cm)")
plt.ylabel("Petal Width (cm)")
plt.title("Petal Length vs Petal Width")
plt.legend(title="Flower Type")
plt.show()

# (b) Histograms for each attribute
plt.figure(figsize=(12, 6))
for i, col in enumerate(iris.feature_names):
    plt.subplot(2, 2, i + 1)
    sns.histplot(iris.data[:, i], kde=True, color="skyblue")
    plt.xlabel(col)
    plt.ylabel("Density")
    plt.title(f"{col} Distribution")
plt.tight_layout()
plt.show()

# (c) Pie Chart (frequency count of each flower type)
plt.figure(figsize=(6, 6))
sns.countplot(x=iris.target, data=iris)
plt.xlabel("Flower Type")
plt.ylabel("Frequency")
plt.title("Frequency of Each Flower Type")
plt.show()

# (d) Pair Plot (relationship between all attribute pairs)
sns.pairplot(iris.data, hue=iris.target, palette="Set3")
plt.suptitle("Pairwise Relationships between Iris Flower Attributes")
plt.tight_layout()
plt.show()