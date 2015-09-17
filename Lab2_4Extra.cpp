#include<iostream>
#include<cmath> 
using namespace std; 

int main(){
	const float pi = 3.14159; 
	float a, b, pe, pr, area;
	
	cout << "Enter major axis radius : "; 
	cin >> a ;
	cout << "Enter minor axis radius : "; 
	cin >> b ; 
	//Find area 
	area = pi * a* b;
	//Find Ramanujan h from this formula 
	pr = pi*(3*(a+b)-sqrt((3*a+b)*(a+3*b)));
	
	//Find from exact formula 
	pe = 2*pi*sqrt(0.5*(pow(a,2)+pow(b,2)));
	
	cout << "The area for this eclipse is "<< area << " square units"<<endl; 
	cout << "The perimeter for this eclipse is "<< pr << " units (from Ramanujan formula)" << endl; 
	cout << "And " << pe << " units from exact formula"; 
	
	return 0;
}
