# Tabular Formatting in Python


## Code

```python
def tabulate(headings, data, no_of_columns):
    row = "{:>10} \t" * no_of_columns
    table = row.format(*headings)

    for i in range(len(data)):
        table += "\n" + row.format(*data[i])

    return table

titles = ["Number", "In words", "In Roman"]
number_list = [
    [1, "one", "I"],
    [2, "two", "II"],
    [3, "three", "III"],
    [4, "four", "IV"],
    [5, "five", "V"],
    [6, "six", "VI"],
    [7, "seven", "VII"],
    [8, "eight", "VIII"],
    [9, "nine", "IX"],
    [10, "ten", "X"],
]

print(tabulate(titles, number_list, len(titles)))
```

## Output

```
    Number 	  In words 	  In Roman 	
         1 	       one 	         I 	
         2 	       two 	        II 	
         3 	     three 	       III 	
         4 	      four 	        IV 	
         5 	      five 	         V 	
         6 	       six 	        VI 	
         7 	     seven 	       VII 	
         8 	     eight 	      VIII 	
         9 	      nine 	        IX 	
        10 	       ten 	         X 	
```

---

## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Saksham Arora | sakshamarora1 | Maharaja Agrasen Intitute of Technology |

