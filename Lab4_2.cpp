#include<iostream>
using namespace std; 

main(){
	int option; 
	
	cout << "1: Turn on refridge \n"; 
	cout << "2: Turn on TV\n"; 
	cout << "3: Turn off refridge\n"; 
	cout << "4: Turn off TV\n"; 
	cout << "Please select option : " ;
	cin >> option; 
	
	if (option<5 && option>0){
		if (option>2){
			cout << "Turn off" << endl; 
		}else if (option>1){
				cout << "Turn on TV " << endl;
			}else cout << "Turn on refridge" << endl ;
	}else cout << "please choose option 1, 2, 3, or 4. \n\n ";
	
	return 0;
}
