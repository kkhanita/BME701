#include<iostream> 
using namespace std; 
main(){
	
	float kg,tax,price,total;
	cout<<"====================================="<<endl;
	cout<<"==== GROCERY TAX CALCULATOR v1.1 ===="<<endl; 
	cout<<"====================================="<<endl;
	cout<<"Net price of veggie per KG : "; 
	cin>>price; 
	cout<<"KG : "; 
	cin>>kg; 
	cout<<"State tax (%) : "; 
	cin>>tax;
	//cal total net price
	price = price*kg; 
	//price include tax 
	tax = 1+(tax/100);
	total = price*tax;
	cout<<"Price (tax included) : " <<total<<" $"<<endl; 
	
	return 0;
}
