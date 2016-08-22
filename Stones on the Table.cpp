#include <bits/stdc++.h>
using namespace std;
int main(){
	/*
	ifstream cin;
	ofstream cout;
	cin.open("input.txt");
	cout.open("output.txt");
	//*/

	int n;
	string s;
	cin>>n>>s;
	int count=0;
	
	for(int i=1;i<n;i++){
		if(s[i]==s[i-1]){
			count++;
		}
	}
	cout<<count;
	return 0;
}