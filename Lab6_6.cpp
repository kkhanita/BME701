#include <iostream>
#include<istream>
using namespace std;
int main(){
	
	int zero=0, odd=0, even=0, n; 
	int x;
	cout<<"Enter numbers of data: "; 
	cin>>n; 
	cout<<"Input "<<n<< " integers : ";
	
    for(int i=0;i<n;i++)
    {
    	cin>>x;
		if(x==0){
			zero = zero+1; continue;
		}else if(x%2){
				odd = odd+1; continue;
				}else{ even = even+1;} 
    }
    cout<<"There are "<<even<<" evens, which are including "<<zero<<" zero(es)."<<endl; 
    cout<<"There are "<<odd<<" odd numbers.";
   
    return 0;
}
