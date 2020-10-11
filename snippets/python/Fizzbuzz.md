# Fizzbuzz

## Code

```python
def fizzbuzz():
    for num in range(1, 101):
        fizz = 'Fizz' if num % 3 == 0 else ''
        buzz = 'Buzz' if num % 5 == 0 else ''
        print(f'{fizz}{buzz}') if fizz or buzz else print(num)

fizzbuzz()
```

## Output

```
1
2
Fizz
.
.
98
Fizz
Buzz
```

---

## Contributed By

| Name | GitHub Username | Institute |
| --- | --- | --- |
| Uday A S | ItIsUday | RV College of Engineering |

