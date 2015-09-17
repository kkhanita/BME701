#include<iostream>
#include<iomanip>
using namespace std; 

int main(){
	int n, num=1;
	char c;
	cout<<"Enter N and a Character (4 $): ";
	cin>>n>>c;
	//num = n*n;
	for(int i=1;i<=n;i++){
		if(i%2){
			for(int j=1;j<=n;j++){
				if(j%2){
					cout<<c<<"\t";				
			    }else {
			    	cout<<num<<"\t"; num++;
				}	    
			}
		}else 	
			for(int j=1;j<=n;j++){
				if(j%2){
					cout<<num<<"\t"; num++;			
			    }else cout<<c<<"\t";	
					
		    }
		cout<<endl;
	}
	return 0;
}
