#include <bits/stdc++.h>
using namespace std;
int main(){
	/*
	ifstream cin;
	ofstream cout;
	cin.open("input.txt");
	cout.open("output.txt");
	//*/

	string s;
	bool output = false;
	cin>>s;
	for (int i=0;i<s.length();i++){
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
			output = true;
			break;
		}
	}

	if(output){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}