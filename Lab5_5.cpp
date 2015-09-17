#include<iostream>
#include<stdio.h>
using namespace std; 

int main(){
	
 	int n, num, rev, dig;
 
 	cout << "Enter num: "; 
 	cin >> n;
 	num = n;
 	rev = 0;
 	cout << endl << "-------------------------------------------------------------------------"<< endl;
 	cout << "|\tnum\t\t|\tdig\t\t|\trev\t\t|"<< endl;
 	cout << "-------------------------------------------------------------------------"<< endl;
 	while (num > 0)
 	{
      cout << "|\t"<<num<<"\t\t|\t"<<dig<<"\t\t|\t"<<rev<<"\t\t|"<< endl;
	  dig = num % 10;
      rev = rev * 10 + dig; 
      num = num / 10;
     
 	}
 	cout << "|\t"<<num<<"\t\t|\t"<<dig<<"\t\t|\t"<<rev<<"\t\t|"<< endl;
	cout << "-------------------------------------------------------------------------"<< endl << endl;
	
	if (n==rev){
		cout << "\tThe reverse number of "<< n << " is " << rev << endl; 
		cout << endl << "\tNumber " << n  << " is a palindrome" << endl;
	} else  cout << endl << "\tNumber " << n  << " is NOT a palindrome" << endl;
	
	return 0;
}
