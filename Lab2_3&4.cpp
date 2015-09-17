#include<iostream>
#include<cmath> 
using namespace std; 

int main(){
	
	int x;
	float u=0, v=0, a=1, s=0, t=0, d=0; 
	cout << "Physics of one-dimentional motion";
	cout << "\nPlease choose the scenarios : \n ";
	cout << "\n case 1 : Lab 2.3";
	cout << "\n case 2 : Lab 2.4 \n";
	cin >> x; 
	
	switch (x) {
  		case 1:
  			cout << "Scenario: 1 (Lab 2.3)"<< endl;
  			cout << "Input acceleration rate in meter/sqrt seconds (a): "; 
  			cin >> a; 
  			cout << "Input time after after releasing from stoplight in seconds (t) : "; 
  			cin >> t; 
  			
  			//calculate the distance from the stoplight;  
  			// s = ut+0.5at^2
  			s = u + (0.5)*a*pow(t,2); 
  			//calculate the final velocity at time t;
			v = u + a * t; 
			
			cout << "The final velocity at time = " << t << " seconds is "<< v << " meters/seconds."<< endl; 
			cout << "The distance from the stoplight is : " << s << " meters" << endl; 
			  
    	break;
    	
  		case 2:
   			cout << "Scenario: 2 (Lab 2.4)"<< endl;
   			//cout << "Input the initial velocity in m/s (u): "; 
   			//cin >> u;
   			cout << "Input the skidding distance in meters (d): ";
   			cin >> d;
   			cout << "Input the deceleration rates in meters/sqrt seconds (a): ";
   			cin >> a; 
   			a = a*(-1); 
   			cout << "Input the time for deceleration process in seconds (t): "; 
   			cin >> t; 
   			u = d - 0.5*a*pow(t,2);
   			u = u/t;
   			v = (d/t * 2)-u; 
   			cout << "The initial velocity is " << u << "meters/seconds" << endl;
   			cout << "The final velocity is "<< v << " meters/seconds";
    			
    	break;
  	
	default:
    cout << "invalid scenarios";
  }
	
return 0; 

}
