#include <iostream>
#include<istream>
using namespace std;
int main(){

{

	string str_num;
	int n=100;

	int number = 0, index = 0;
	cout<<"Enter numbers of data: "; 
	cin>>n; 
	int arr[n];  
	cout<<"Input "<<n<< " integers, seperate by space : ";
	getline(cin, str_num);  // Get a line of string

	for (int i = 0 ; i < n ; i++){   // Processing your str Array
   	 if (isdigit(str_num[i])){
        number *= 10;
        number += ((int)str_num[i] - '0');
    	}
    	else {
        arr[index++] = number;
        number = 0;
   		}
	}
		arr[index] = number;    // for last element of your input
		cout<<arr[index];




}

}
