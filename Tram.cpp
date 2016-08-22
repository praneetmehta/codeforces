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
	int curnt=0,pre=0,a=0,b=0,max=0;
	for(int i=0;i<n;i++){
		pre = curnt;
		cin>>a>>b;
		curnt = pre-a+b;
		if(curnt>max){
			max = curnt;
		}
	}
	cout<<max;
	return 0;
}