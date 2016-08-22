#include <bits/stdc++.h>
using namespace std;

int main(){
	//**
	ifstream cin;
	ofstream cout;
	cin.open("input.txt");
	cout.open("output.txt");
	//*/
	int number;
	while(number!=42){
		cin>>number;
		if(number!=42){
			cout<<number<<endl;
		}
		else{
			break;
		}
	}
	return 0;
}