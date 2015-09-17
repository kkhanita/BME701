#include<iostream> 
#include<iomanip>
using namespace std; 
main(){
	
	char ch='A';
	cout<<"cout"<<endl;
	cout.setf(ios::right, ios::adjustfield);
	cout.fill('#'); cout << setw(6) << ch << endl;
	cout.setf(ios::left, ios::adjustfield);
	cout.fill('$'); cout << setw(6) << ch << endl <<endl;
	
	printf("printf\n");
	printf("%s",std::string(5,'#').c_str());
	printf("%c\n",ch);
	printf("%c",ch);
	printf("%s",std::string(5,'$').c_str());
	
}


