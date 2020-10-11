def fizzbuzz():
    for num in range(1, 101):
        fizz = 'Fizz' if num % 3 == 0 else ''
        buzz = 'Buzz' if num % 5 == 0 else ''
        print(f'{fizz}{buzz}') if fizz or buzz else print(num)

fizzbuzz()