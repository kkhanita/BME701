#include<iostream>
using namespace std; 

main(){
	char p1, p2, x; 
	
		cout << "Pao-Ying-Chup Game for 2 players" << endl; 
		cout << "Player #1: Please enter your move (\'p\' for paper, \'r\' for rock or \'s\' for scissors) : "; 
		cin >> p1; 
		cout << "Player #2: Please enter your move (\'p\' for paper, \'r\' for rock or \'s\' for scissors) : "; 
		cin >> p2;
		
		if (p1=='r'||p1=='p'||p1=='s'){			//check if player 1 input valid char
			switch (p1){
				case 's': cout << "Scissors vs "; break; 
				case 'r': cout << "Rock vs "; break; 
				case 'p': cout << "Paper vs "; break;
				default : cout << " ??? ==> Invalid Gameplay : Player 1 ERROR" << endl; break;
			}
			
			if (p2=='r'||p2=='p'||p2=='s'){		//check if player 2 input valid char
		//	cout << "valid" <<endl; 
				switch (p2){
				case 's': cout << "Scissors "; break; 
				case 'r': cout << "Rock  "; break; 
				case 'p': cout << "Paper "; break;
				default : cout << " ??? ==> Invalid Gameplay : Player 2 ERROR" << endl; break;
				}
				
				if(p1!=p2){
					if(p1=='r'){
						//cout << "Rock vs "; 
						if(p2=='p'){
							cout << " ==> Player #2 wins." << endl; 
						}else 
							cout << " ==> Player #1 wins." << endl; 
					}else 	if(p1=='p'){
								//cout << "Paper vs ";
								if(p2=='r'){
									cout << " ==> Player #1 wins." << endl; 
								}else 
									cout << " ==> Player #2 wins." << endl;
						  	}else if(p1=='s'){
							  			//cout << "Scissors vs "; 
										if(p2=='p'){
											cout << " ==> Player #1 wins." << endl; 	
										}else 	
											cout << " ==> Player #2 wins." << endl; 
								}
									
				}else cout << "Tie" <<endl;
			}else cout << " ??? ==> Invalid Gameplay : Player 2 ERROR" << endl;
			
		} else cout << " ??? ==> Invalid Gameplay : Player 1 ERROR" << endl;

	cout << "Game Ends. \nPress any key to continue";
	
	//return 0;
}
