#include <bits/stdc++.h>
using namespace std;

int main(){
	//**
	ifstream cin;
	ofstream cout;
	cin.open("input.txt");
	cout.open("output.txt");
	//*/
	int n, k;
	cin>>n>>k;
	int score[n];
	for(int j=0;j<n;j++){
		cin>>score[j];
	}
	int i=0;
	while(score[i]>=score[k-1] && i<n && score[i]!=0){
		i++;
	}
	cout<<i;
	return 0;
}