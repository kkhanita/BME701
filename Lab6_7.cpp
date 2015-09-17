#include <iostream>
#include<istream>
using namespace std;
int main(){
	
	int zero=0, odd=0, even=0, n; 
	int firstNum, secondNum;
	int sqrtNum, sumSqOdd, sumEven=0;
	cout<<"a) Enter first number and second number: "; 
	cin>>firstNum>>secondNum; 
	cout<<"b) All odd numbers are: ";
    for(int i=firstNum;i<=secondNum;i++)
    {
		if(i%2){ // This is odd number process
			cout<<i<<" ";
		}else{  // This is even number process
			sumEven = sumEven + i;
			} 
    }  
    cout<<endl<<"c) Sum of all even number: "<<sumEven<<endl;
    cout<<"d) Number and their square from "<<firstNum<<" to "<<secondNum<<" are :"<<endl; 
    cout<<"Number\t::\tSquare Num"<<endl;
    for(int i=firstNum;i<=secondNum;i++)
    {
    	sqrtNum = i*i;
    	cout<<i<<"\t ::\t "<<sqrtNum<<endl; 
		if(i%2){ // This is odd number process
			sumSqOdd += sqrtNum;
		}
	}
    cout<<"e) Sum of square of the odd number: "<<sumSqOdd<<endl;
   
    return 0;
}
