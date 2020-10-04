# Count frequency of unique characters in a string

## Code
```python
from collections import Counter

# Input string
string = input("Enter string: ")

# Keeps count of frequency of each character
frequency = Counter(string)

# Write frequency to frequency.txt file
with open("frequency.txt", "w") as file:
    for char in frequency:
        file.write(f"Frequency of {char}: {frequency[char]}\n")
```

## Description
Counter(a `dict` subclass) is a collection where elements are stored as dictionary keys and their counts are stored as dictionary values. [See docs](https://docs.python.org/3/library/collections.html#collections.Counter)

## Input
```
Enter string: aabbc
```

## Output
```
$ cat frequency.txt

Frequency of a: 2
Frequency of b: 2
Frequency of c: 1
```

## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Yogesh Singh | yogeshsingh101200 | Maharaja Surajmal Institute of Technology |