#include<iostream>
using namespace std; 

int main(){
	
	int curyear, age, birthyr; 
	cout << "Enter current year : "; 
	cin >> curyear; 
	cout << "Enter your current age : "; 
	cin >> age; 
	if (curyear == 2558){
		birthyr = 2558 - age;	
		cout << "Your birth year is : " << birthyr << "BE or"<< birthyr - 543<<"AD"<<endl;
	}else {
		birthyr = 2015 - age; 
		cout << "Your birth year is : " << birthyr << "AD or"<< birthyr + 543<<"BE";
	}
	return 0; 
}
