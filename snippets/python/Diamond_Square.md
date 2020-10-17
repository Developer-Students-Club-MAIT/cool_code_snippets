# Diamond Square

## Description
A Program to print the Diamond Sqaure Pattern, number of rows is given as input.

## Code
```python
# The Diamond Pattern
n=int(input("Enter number of Rows: "))

# The Diamond Pattern
n=int(input("Enter number of Rows: "))

# The Top Pyramid
for i in range(n):
    space="  "*(n-i-1)
    star=(2*i)*'* '+'*'
    print(space+star)
    
# The bottom Pyramid
for i in range(n):
    space = ("    " if i!=0 else "  ")+"  "*(i-1)
    star=star[:-4]
    print(space+star)
```

## Input
```
Enter number of Rows: 5
```

## Output
```
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
```

## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Biraj De | BirajCoder | Future Institute of Engineering and Management, Kolkata |