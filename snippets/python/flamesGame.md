# This is a fun game. Come up with a program that displays the relationship between two persons.

## Code

```python
def flame(firstName, secondName): 
	l, sc = 1, 0
	rc, fc = 0, 5
	flamesString = "flames"
	flamesString = [i for i in flamesString] 
	q = "".join(firstName) 
	w = "".join(secondName) 
	
	# print(q, w) 
	n = len(firstName) 
	m = len(secondName) 
	tc = n + m 
	for i in range(n): 
		c = firstName[i] 
		for j in range(m): 
			if (c == secondName[j]): 
				firstName[i] = -1
				secondName[j] = -1
				sc = sc + 2
				break

	rc = tc - sc 
	i = 0

	while (i): 
		if (l == (rc)): 
			for k in range(i,len(flamesString)): 
				flamesString[k] = flamesString[k + 1] 
			flamesString[k + 1] = '\0'
			fc = fc - 1
			i = i - 1
			l = 0
		if (i == fc): 
			i = -1
		if (fc == 0): 
			break
		l += 1
		i += 1

	# Print the results 
	if (flamesString[0] == 'e'): 
		print(q, "is SOUR ENEMY of", w) 
	elif (flamesString[0] == 'f'): 
		print(q, "is FRIEND of", w) 
	elif (flamesString[0] == 'm'): 
		print(q, "is going to MARRY", w) 
	elif (flamesString[0] == 'l'): 
		print(q, "is in LOVE with", w) 
	elif (flamesString[0] == 'a'): 
		print(q, "is more AFFECTIONATE towards", w) 
	else: 
		print(q, "and", w, "are SIBLINGS ") 

# Driver code 
firstName = input("Enter your name\n")
secondName = input("Enter your crush's name\n")
firstName = [i for i in firstName] 
secondName = [j for j in secondName] 

flame(firstName, secondName) 
```

## Input
Ajay
Priya

## Output
Ajay is FRIEND of Priya


## Contributed By

| Name        | GitHub Username | Institute |
| ---         | ---             | ---       |
| Manav Gupta | silentwraith6   | PEC       |