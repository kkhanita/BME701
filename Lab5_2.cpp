//Lab 5.2 add Average function
#include <iostream>
using namespace std; 

int main(){
	int i=0, j=0, m, n, x, sum=0;
	cout << "Sum of numbers between M and N devisable by X"; 
	cout << "Enter M. N, and X: "; 
	cin >> m >> n >> x; 
	cout << "Numbers divisable by "<< x << endl;
	
	for(i=m; m<=n; m++){
		if(!(m%x)){
			sum=sum+m;  
			cout << m << "  ";
			j=j+1;		
		} 
	}
	cout << endl;	
	
	cout << "Summation : " << sum << endl;
	cout << "Average : " << sum/j << endl;
	return 0;
}
