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
	cin>>s;
	bool change = false;
	bool case1 = false;
	if(s.length()==1)
		change = true;
	if(s[0]>=97 && s[0]<=122){
		case1 = true;
	}
	for(int i=1;i<s.length();i++){
		if(s[i]>=65 && s[i]<=90){
			change = true;
		}else{
			change = false;
			break;
		}
	}
	if(change == true){
		if(case1 == true){
			s[0]-=32;
			cout<<s[0];
		}else{
			s[0]+=32;
			cout<<s[0];
		}
		for(int i=1;i<s.length();i++){
			s[i]+=32;
			cout<<s[i];
		}
	}else{
		for(int i=0;i<s.length();i++){
			
			cout<<s[i];
		}
	}	
	return 0;
}