# Diamond Square

## Description
A Program to print the Diamond Sqaure Pattern. The rows count is given as a input which denotes the longest row in the pattern.

## Code
```python
n = int(input("Enter the rows count:"))

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

## Output

![Code Output](./Output.png)

## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Biraj De | BirajCoder | Future Institute of Engineering and Management, Kolkata |