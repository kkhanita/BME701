#include<iostream> 
#include<iomanip>
#include <stdio.h>
using namespace std; 
int main(){
	
	double b1 = -45.36, b2 = 2.3506e-1, b3=0.00345;
	//set column width = 10 and right justified
	cout.setf(ios::right, ios::adjustfield);
	cout.setf(ios::showpoint);
	cout.precision(5); cout<<setw(10)<<b1<<endl;
 	cout.setf(ios::scientific); 
	cout.precision(4); cout<<setw(10)<<b2<<endl;
	cout.precision(2); cout<<setw(10)<<b3<<endl<<endl;
	
	//printf 
	printf("%10.3f\n",b1);
	printf("%10.4e\n",b2);
	printf("%10.2e\n",b3);
	return 0;
}


