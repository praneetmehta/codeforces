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
	char a[(s.length()/2)+1];
	for(int i=0;i<s.length();i+=2){
		a[i/2] = s[i];	
	}

	for(int i=0;i<sizeof(a)-1;i++){
		for(int j=sizeof(a)-1;j>=0;j--){
			if(a[j]<a[j-1]){
				int temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0;i<sizeof(a)-1;i++){
		cout<<a[i]<<"+";
	}
	cout<<a[sizeof(a)-1];
	return 0;
}