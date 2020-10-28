# Longest Common Subsequence

## Code

```C++
#include <iostream>
#include <cstring>

using namespace std;

int findmax( int a, int b)
{
	return a > b ? a : b;
}

void lcs( char *str1, char *str2, int m, int n ) 
{ 
	int L[m+1][n+1]; 

	for (int i=0; i<=m; i++) 
	{ 
		for (int j=0; j<=n; j++) 
		{ 
			if (i == 0 || j == 0) 
          			L[i][j] = 0; 
            		else if (str1[i-1] == str2[j-1]) 
                		L[i][j] = L[i-1][j-1] + 1; 
            		else
                		L[i][j] = findmax(L[i-1][j], L[i][j-1]); 
		} 
	} 

	int index = L[m][n]; 
	char lcs[index+1]; 
	lcs[index] = '\0'; 
 
	int i = m, j = n; 
	while (i > 0 && j > 0) 
	{ 
		if (str1[i-1] == str2[j-1]) 
		{ 
			lcs[index-1] = str1[i-1]; 
			i--; j--; index--;	
		} 
		else if (L[i-1][j] > L[i][j-1]) 
			i--; 
		else
			j--; 
	} 

	cout << "LCS: " << lcs; 
} 

int main() 
{ 
	char str1[100], str2[100];
	cout << "String 1: ";
	cin.getline(str1, 100);
	cout << "String 2: ";
	cin.getline(str2, 100);

	int m = strlen(str1); 
	int n = strlen(str2); 

	lcs(str1, str2, m, n); 
	return 0; 
} 

```

## Output
```
String 1: YUOSJTYPE
String 2: OSYEWEASW
LCS: OSYE
```

## Contributed By

| Name | GitHub Username | 
| --- | --- | 
| Srijita | SrijitaSarkar99 | 
