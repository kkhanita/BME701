#include <iostream>
using namespace std;

int main(){
	int bro, sis;
	int sibling = 0; 
	
	cout << "Hello World!!!" << endl;
	cout << "How many brothers do you have? : ";
	cin >> bro;
	cout << "How many sisters do you have? : ";
	cin >> sis; 
	
	sibling = bro+sis; 
	cout << "\nSo.. you have " << bro << "brother(s) and " << sis << "sister(s)" << endl; 
	cout << "Altogether you have " << sibling << " brother(s) and sister (s)";
	 	
	return 0;
}
