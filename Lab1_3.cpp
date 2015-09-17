#include <iostream> 
#include <cstring> 
using namespace std; 

int main(){
//	char string1[1000];
//	char string2[1000];
	char string1[1000] = "BIOMEDICAL"; 
	char string2[1000] = "ENGIneeRing"; 
	
	cout << "string1 with lower case: ";
	cout << strlwr(string1)<< endl; 
	
	cout << "string2 in lower case: "; 
	cout << strlwr(string2)<< endl;
	
	return 0;
		
}
