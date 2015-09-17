#include<iostream> 
using namespace std; 
main(){

	int temp,deg; 
	char T; 
	
	cout<<"======================================================="<<endl;
	cout<<"==== Temperature converter Celcius <---> Farenheit ===="<<endl; 
	cout<<"======================================================="<<endl;
	 
	cout<<"\tc : Convert Celcius to Farenheit "<< endl << "\tf : Convert Farenheit to Celcius"<<endl;
	cout<<"\tSelect function :"<<endl;
	cin>>T; 
	cout<<"Input temperature : ";
	cin>>temp;
	
	switch(T){
		case 'c': 
			deg = (temp * 9/5) + 32; 
			cout<< temp<<" Celcius is equal to "<<deg<<" Farenheit"<<endl; 
		break;
		case 'f': 
			deg = (temp-32)*5/9;
			cout<<temp<<" Farenheit is equal to "<<deg<<" Celcius"<<endl;
		break;
		default: cout << "invalid input\n please any key to terminate";
	}
	return 0;
}
