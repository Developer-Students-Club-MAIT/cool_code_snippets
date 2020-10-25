# Trick to Increase Size of an Array

## Description
First we declare an A array of size n in heap using pointer p and take input . Then delcare another B array with size greater than n using pointer q.
Copying the element of A to B and delete the memory pointed by p . Make p pointer point to q and q points to null. Then take more input . Finally print all elements.

## Code
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
  int * p = new int[5]; //Created array of 5 in heap
  cout<<"Enter the elements\n";
  for (int i = 0; i < 5; i++)
    cin >> p[i];
  //to increase size
  int * q = new int[10]; //create a big array

  //copy elements of p to q
  for (int i = 0; i < 5; i++)
    q[i] = p[i];

  delete p;
  p = q;
  q = nullptr;
cout<<"Enter more elements to be added\n";
  for (int i = 5; i < 10; i++)
    cin >> p[i];

cout<<"Total elements are:\n";
  for (int i = 0; i < 10; i++)
    cout << p[i] << " ";
  return 0;
}
```

## Input
```
Enter the elements                                                                                                    
1 2 3 4 5                                                                                                             
Enter more elements to be added                                                                                       
6 7 8 9 10 
```
## Output
```
Total elements are:                                                                                                   
1 2 3 4 5 6 7 8 9 10
```

## Contributed By
|Name|Github Username|College Name|
|---|---|---|
|Manikant Rai|Manikant25|SRM Institute of Science And Technology|
