//Lab 6.4
#include<iostream>
#include<cstring>
using namespace std; 

int main(){
	int x=100, vowel=0, cons=0;
	char word[x];
	cout<<"Enter word : ";
	cin>>word;
	cout<<"Your input word to compute is ";
	x = strlen(word);
	for(int i=0;i<=x;i++){
		cout<<word[i]<<" ";
		if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
			vowel = vowel+1;
		}else cons = x-vowel;
	}
	cout<<endl;
	cout<<"Number of letters : "<<strlen(word)<<endl;
	cout<<"Number of vowels : "<<vowel<<endl;
	cout<<"Number of consonant : "<<cons<<endl;
	
	return 0;
}
