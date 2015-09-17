//Lab 5.3  Factorial
#include <iostream>
using namespace std; 

int main(){
	int i=0, n, sum;
	cout << "Enter N to calculate N: "; 
	cin >> n ; 
	//cout << "i" << "    " << "sum" << endl;
	for(i=1; i<=n; i++){
		sum = sum*i;
	//	cout << i << "    " << sum << endl; 
	}
//	cout << endl;	
	cout << i-1 << "! = " << sum << endl;
	return 0;
}
