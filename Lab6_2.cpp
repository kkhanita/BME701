#include<iostream>
#include<iomanip>
using namespace std; 

int main(){
	int i=1, n, num, min, max; 
	float sum=0, ave;
	cout << "Enter target sum : "; 
	cin >> n; 
	cout.setf(ios::showpoint); 
	cout<<std::setprecision(6)<< "[" <<sum<<"], Data("<<i<<"): ";
	cin >> num;
	max = min = num;
	for(i;sum<=n;i++){
		cout<<std::setprecision(6)<< "[" <<sum<<"], Data("<<i<<"): ";
		cin >> num;
		if (max < num)
            max = num;
        else if (min > num)
            min = num;
		sum = sum+num; 
		ave = sum/i;
	}
	cout << "Sum: "<<std::setprecision(6)<<sum<<endl;
	cout << "No. of data: "<<i<<endl;
	cout << "Ave: "<<std::setprecision(5)<<ave<<endl;
	cout << "Min: "<<min<<"\tMax : " <<max<<endl; 
	cout << "See you later...";
	return 0;
}
