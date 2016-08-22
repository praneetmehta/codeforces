#include <bits/stdc++.h>
using namespace std;

int main(){
	/**
	ifstream cin;
	ofstream cout;
	cin.open("input.txt");
	cout.open("output.txt");
	//*/
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int j =0;j<n;j++){
		string temp = s[j];
		if(temp.length()>10){
			cout<<temp[0]<<temp.length()-2<<temp[temp.length()-1]<<endl;
		}
		else{
			cout<<temp<<endl;
		}
	}
	return 0;
}