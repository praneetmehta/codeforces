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
	cin>>n;
	int coin[n];
	int sum=0, count=0, value=0;
	for(int i=0;i<n;i++){
		cin>>coin[i];
		sum+=coin[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>0;j--){
			if(coin[j]<coin[j-1]){
				int temp = coin[j];
				coin[j] = coin[j-1];
				coin[j-1] = temp;
			}
		}
	}
	for(int i=n-1;i>=0;i--){
		value+=coin[i];
		count++;
		if(value> sum/2){
			break;
		}
	}
	cout<<count;
	return 0;
}