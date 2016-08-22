#include <bits/stdc++.h>
using namespace std;

int main(){
	/**
	ifstream cin;
	ofstream cout;
	cin.open("input.txt");
	cout.open("output.txt");
	/**/

	string s;
	cin>>s;
	int count = 1;
	bool danger = false;
	for(int i=1;i<s.length();i++){
		if(s[i] == s[i-1] && count<7){
			count++;
			if(count == 7){
				danger = true;
			}
		}else if(s[i]!= s[i-1] && count<7){
			count = 1;
		}else if(count == 7){
			danger = true;
			break;
		}
	}
	if(danger == true){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	
}