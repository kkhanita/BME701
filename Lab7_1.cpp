#include<iostream>
#include<iomanip>
using namespace std; 

int main(){
	int score, i=0, sumScore=0, grade, a=0, b=0, c=0, d=0, f=0; 
	int pt, sumpt = 0;
	double avgScore=0, avgpt=0;
	cout<<"================================================"<<endl;
	cout<<"Grading system"<<endl;
	cout<<"================================================"<<endl;
	do{
	 	
		cout<<"Please enter your score : "; 
	 	cin>>score;
		if (cin.fail()){
    	cout << "input is not integer" <<endl;
       	break; 
		}
		 if(score<=100){	 
	 		if(score>=80){
	 			pt = 4;
	 			a = a+1;	 			
			 }else if(score>=70){
			 			pt = 3;
			 			b = b+1;
			 	   }else if(score>=60){
			 	   			pt = 2;
			 	   			c = c+1;
						 }else if(score>=50){
						 			pt = 1;
						 			d = d+1;
						 		}else if(score>=0){
						 			pt = 0;
						 			f = f+1;
								 }
						 			
								 
			sumpt = sumpt+pt; 
			i = i+1; 
			sumScore = sumScore + score; 
	 	}else if(score!=999){
	 		cout<<"Alert !!! Invalid score"<<endl; 
	 		continue;
		 }
		 

	}while(score!=999);//end while 
	 	 
	 avgScore = sumScore/i;
	 avgpt = sumpt/i;
	 cout<<"----------------------------------------------------------------"<<endl;
	 cout<<"Total "<<i<<" students by grade = A : "<<a<<"  B : "<<b<<"  C : "<<c<<"  D : "<<d<<"  F : "<<f<<" "<<endl;
	 cout.setf(ios::showpoint); 
	 cout<<setprecision(4)<<"Average score : "<<avgScore<<endl; 
	 cout<<setprecision(3)<<"Average GPA : "<<avgpt<<endl;
	 cout<<"----------------------------------------------------------------"<<endl;
	 return 0;
	 
}
