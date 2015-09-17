#include<iostream>
using namespace std; 

main(){
	
	int i=3, k=5, j=0, m=-2; 
	char n='c'; 
	
	cout << "1. : " ;
	if (j==0){
		cout << "Truth" << endl; 
	}else cout << "False" << endl;
	
	cout << "2. : " ;
	if (!(j<--i) && (i<5)){
		cout << "Truth" << endl; 
	}else cout << "False" << endl;
	
	cout << "3. : " ;
	if (3*i-4%2/k<2+m){
		cout << "Truth" << endl; 
	}else cout << "False" << endl;
	
	cout << "4. : " ;
	if (j>k || m<i){
		cout << "Truth" << endl; 
	}else cout << "False" << endl;
	
	cout << "5. : " ;
	if (!n+m){
		cout << "Truth" << endl; 
	}else cout << "False" << endl;
	
	cout << "6. : " ;
	if (1<k<10){
		cout << "Truth" << endl; 
	}else cout << "False" << endl;
}
