# Recursive Fibonacci in C++ with Memoization

## Description
In an ordinary recursive function of the Fibonacci same function with the same parameter is called many times, so there are excessive recursive calls, but with memoization, an array of suitable size is taken and each value is initialized with -1. The result of the unique recursive call in an array is then stored replacing -1. So, when the function needs to be called again, it isn't called, instead, the result is directly taken from the array already stored and if it does not exists then the function is called recursively. This works upto 100 numbers.

## Code
```C++
#include<bits/stdc++.h>

using namespace std;
int F[100]; //Globally declared  or Static Array to store the value of called function
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
  int i,x;
  for (i = 0; i < 100; i++)
    F[i] = -1;
   cout << "Enter the index(max:100) : ";   
  cin>>x;
  cout << "The " << x << "th term in the fibonacci sequence is : " << mfib(x);
  return 0;
}
```

## Input
```
Enter the index(max:100) : 7
```
## Output
```
The 7th term in the fibonacci sequence is : 13
```

## Contributed By
|Name|Github Username|College Name|
|---|---|---|
|Manikant Rai|Manikant25|SRM Institute of Science And Technology|
