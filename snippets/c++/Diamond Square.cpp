#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;  // Enter number of rows
	int blanks = n-1;
  
 // Below prints the upper half
	for(int i=1; i<=n; i++){
		for(int j=0; j<blanks; j++)
			cout << " ";

		for(int k=1; k<=(2*i-1); k++)
			cout << "*";

		blanks--;
		cout << endl;
	}
  
  //Below prints the lower half
	blanks = 1;
	for(int i=n-1; i>=0; i--){
		for(int j=0; j<blanks; j++)
			cout << " ";

		for(int k=1; k<=(2*i-1); k++)
			cout << "*";

		blanks++;
		cout << endl;
	}
	return 0;
}


	
