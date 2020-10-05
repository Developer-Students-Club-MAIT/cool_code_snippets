# Longest Common Subsequence

## Code

```python
def lcs(string1, string2):
    m=len(string1)
    n=len(string2)

    L = [[0 for x in range(n+1)] for x in range(m+1)]

    for i in range(m+1):
        for j in range(n+1):
            if i == 0 or j == 0:
                L[i][j] = 0
            elif string1[i-1] == string2[j-1]:
                L[i][j] = L[i-1][j-1] + 1
            else:
                L[i][j] = max(L[i-1][j], L[i][j-1])

    idx = L[m][n]

    lcs_algo = [""] * (idx+1)
    lcs_algo[idx] = ""

    i = m
    j = n
    while i > 0 and j > 0:

        if string1[i-1] == string2[j-1]:
            lcs_algo[idx-1] = string1[i-1]
            i -= 1
            j -= 1
            idx -= 1

        elif L[i-1][j] > L[i][j-1]:
            i -= 1
        else:
            j -= 1

    print("LCS: " + "".join(lcs_algo))


string1 = input("Enter string1: ")

string2 = input("Enter string2: ")

lcs(string1,string2)
```

## Output

```
Enter String1: ACADB

Enter String2: CBDA

LCS: CB
```
## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Shivam Porwal | ShivamPorwal02 | Maharaja Surajmal Institute of Technology |