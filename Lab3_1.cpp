#include<iostream> 
#include<iomanip>
using namespace std; 
int main(){
	
	int a1=027, a2=0x878; 
	
	cout<<oct<<a1<<" in \'base 8\' \< "<<hex<<a2<< " in \'base 16\'"<<endl; 
	printf("%o in \'base 8\' \< %x in \'base 16\'",a1,a2);
	

	return 0;
}


