#include<iostream>
using namespace std; 

int main(){
	int yr, x;
	cout << "Enter a year to check if it is a leap year" << endl; 
	cin >> yr; 
	
	if (yr>=2500){
		yr = yr - 543;
		if(yr%4){
		cout << yr+543 << " is a common year." << endl;
		}else if(yr%100){
				cout << yr+543 << " is a leap year." << endl; 
			}else if(yr%400){
						cout << yr+543 << " is a common year." << endl;
					}else cout << yr+543 << " is a leap year." << endl; 
	
	} else if(yr%4){
				cout << yr << " is a common year." << endl;
			}else if(yr%100){
					cout << yr << " is a leap year." << endl; 
					}else if(yr%400){
						cout << yr << " is a common year." << endl;
						}else cout << yr << " is a leap year." << endl; 
	
	return 0; 
	
}
