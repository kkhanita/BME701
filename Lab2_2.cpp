#include<iostream>
#include<cmath> 
using namespace std; 

int main(){
	
	int x=0;
	float y=0; 
	const float e = 2.718281828459;
	
	cout << "Please enter value x : ";
	cin >> x; 
	
	y = (3* pow(x,3)) + 2*e + pow(2,(2*x+1)) + sqrt(pow(x,2)+1);
	
	cout << "y = "<< y;
	
	return 0;
}
