//Lab 5.1 
#include <iostream>
using namespace std; 

int main(){
	int i=0, m, n, x, sum=0;
	cout << "Sum of numbers between M and N devisable by X"; 
	cout << "Enter M. N, and X: "; 
	cin >> m >> n >> x; 
	cout << "Numbers divisable by "<< x << endl;
	
	for(i=m; m<=n; m++){
		if(!(m%x)){
			sum=sum+m;  
			cout << m << "  ";		
		} 
	}
	cout << endl;	
	cout << "Summation : " << sum << endl;
	return 0;
}
