#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	char name[100]; 
	int age, height; 
	
	cout << "Please enter your name : "; 
	cin >> name; 
	
	cout << "Age :"; 
	cin >> age ;
	
	cout << "Height";
	cin >> height; 
	
	cout << "Your name is " << name << ". You're "<< age << " years old. Your height is "<< height<< " cm.";
	
	return 0;
}
