# Recursive Fibonacci in C++ with Memoization

# Code
```C++
#include<bits/stdc++.h>
using namespace std;
int F[10]; //Globally declared  or Static Array to store the value of called function
           //It prevent from excessive recursion
int mfib(int n)
{
 if(n<=1)
 {
 F[n]=n;
 return n;
 }
 else
 {
 if(F[n-2]==-1)
 F[n-2]=mfib(n-2);
 if(F[n-1]==-1)
 F[n-1]=mfib(n-1);
 F[n]=F[n-2]+F[n-1];
 
 return F[n];
 }
}


int main()
{
 int i;
 for(i=0;i<10;i++)
 F[i]=-1;

 printf("%d \n",mfib(5));
 return 0;
}
```


# Input
'''7'''

# Output
'''13'''

## Contributed By
|Name|Github Username|College Name|
|---|---|---|
|Manikant Rai|Manikant25|SRM Institute of Science And Technology|

