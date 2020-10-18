# Diamond Square

## Description
A Program to print the Diamond Sqaure Pattern, number of rows is given as input.

## Code
```python
# The Diamond Pattern
n = int(input("Enter number of Rows: "))

# The Top Pyramid
for i in range(n):
    space = "  " * (n - i - 1)
    star = (2 * i) * "* " + "*"
    print(space + star)

# The bottom Pyramid
for i in range(n):
    space = "  " * (i)
    star = star[:-4]
    print("  " + space + star)
```

## Input
```
Enter the rows count: 7
```

## Output

![Code Output](./Output_Images/Diamond_Square.png)

## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Biraj De | BirajCoder | Future Institute of Engineering and Management, Kolkata |