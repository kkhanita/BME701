#include<iostream> 
#include<cstring>
using namespace std; 
main(){
	string name,surname; 
	string bdate, bmo, byr; 
	string course, grade;
	string gpa;
	
	cout<<" ------ Enter your data -----" <<endl; 
	cout<<"Name (lastname, firstname) : "; 
	cin>>surname>>name; 
	cout<<"Date of birth (24 June 1990) : "; 
	cin>>bdate>>bmo>>byr; 
	cout<<"Course (engr201): "; 
	cin>>course; 
	cout<<"Grade (A) : "; 
	cin>>grade;
	cout<<"GPA (2.75): " ;
	cin>>gpa;
	
	cout<< " ------ Your data -----" <<endl; 
	cout<<"You are "<<surname<<"\, "<<name<<" and was born on "<<bmo<<" "<<bdate<<"\, "<<byr<<"."<<endl; 
	cout<<"You have enrolled in \""<<course<<"\" and got \'"<<grade<<"\'."<<endl; 
	cout<<"Your GPA is now "<<gpa<<endl; 
	
	return 0;

}
