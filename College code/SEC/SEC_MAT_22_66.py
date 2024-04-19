import pandas as pd

csvFile = pd.read_csv(r"E:\C++\College code\SEC\SEC_Marks.csv")

# Q1
df1 = pd.DataFrame(csvFile)
print(df1)

# Q2
df2 = df1.isnull()
print(df2)

# Q3
print(df1["Physics_Marks"]>80)
print(df1["Math_Marks"]>80)
print(df1["CS_Marks"]>80)

# Q4
cols = ["English_Marks", "Math_Marks", "Physics_Marks", "Biology_Marks", "CS_Marks"]
df1["Sum"] = df1[cols].sum(axis=1)
print(df1.sort_values(by = "Sum", ascending=False))