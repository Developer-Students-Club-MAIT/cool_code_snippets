# Recursive Fibonacci in C++ with Memoization

## Description
In an ordinary recursive function of the Fibonacci same function with the same parameter is called many times, so there are excessive recursive calls, but with memorization, we take an array of suitable size and initialize it with -1 and store the result of the unique recursive call in an array instead of -1. So when we need to call a function again, we don't call we directly take its result from the array we have already stored and if does not exist then the function is called recursively.

## Code
```C++
#include<bits/stdc++.h>

using namespace std;
int F[10]; //Globally declared  or Static Array to store the value of called function
//It prevent from excessive recursion
int mfib(int n) {
  if (n <= 1) {
    F[n] = n;
    return n;
  } else {
    if (F[n - 2] == -1)
      F[n - 2] = mfib(n - 2);
    if (F[n - 1] == -1)
      F[n - 1] = mfib(n - 1);
    F[n] = F[n - 2] + F[n - 1];

    return F[n];
  }
}

int main() {
  int i;
  for (i = 0; i < 10; i++)
    F[i] = -1;
  printf("%d \n", mfib(7));
  return 0;
}
```

## Input
```
7
```

## Output
```
13
```
## Contributed By
|Name|Github Username|College Name|
|---|---|---|
|Manikant Rai|Manikant25|SRM Institute of Science And Technology|
