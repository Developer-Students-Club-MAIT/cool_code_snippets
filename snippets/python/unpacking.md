# Unpacking list/tuples

## Code

```python
names = ["Messi", "Muller", "Lewandowski", "Kevin", "Ramos", "Mbappe", "Neymar", "Ronaldo"]

messi, *footballers, ronaldo = names

print(messi + " plays for Barcelona.")
print(ronaldo + " plays for Juventus.\n")

print(*footballers, sep=", ", end=" ") 
print("are some of the top football players.", sep="")
```

## Output

```
Messi plays for Barcelona.
Ronaldo plays for Juventus.

Muller, Lewandowski, Kevin, Ramos, Mbappe, Neymar are some of the top football players.
```

---

## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Saksham Arora | sakshamarora1 | Maharaja Agrasen Institute of Technology |

