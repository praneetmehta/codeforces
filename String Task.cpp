#include <bits/stdc++.h>
using namespace std;

int main(){
	/**
	ifstream cin;
	ofstream cout;
	cin.open("input.txt");
	cout.open("output.txt");
	//*/
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]>=65 && s[i]<=90){
			s[i] = s[i] + 32;
		}
	}
	int k=0;
	for(int j=0;j<s.length();j++){
		if(s[j]!=97 && s[j]!=101 && s[j]!=105 && s[j]!=111 && s[j]!=117 && s[j]!=121){
			cout<<"."<<s[j];
		}
	}
	

}