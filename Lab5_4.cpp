//Lab 5.4 Factorial
#include <iostream>
using namespace std; 

int main(){
	char x;
	int i, n, sum;	
	do{
		sum=1;
		cout << "Enter N to calculate N: "; 
		cin >> n ; 
		for(i=1; i<=n; i++){
			sum = sum*i;
		}
		cout << i-1 << "! = " << sum << endl;
		cout << "Continue ? (y/n) : "; 
		cin >> x; 
	}while(x=='y');

	return 0;
}
