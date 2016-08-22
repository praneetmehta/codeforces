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
	int group;
	int cab = 0;
	int one=0, two=0, three=0;
	for(int i=0;i<n;i++){
		cin>>group;
		if(group == 4){
			cab++;
		}else if(group == 3){
			three++;
		}else if(group == 2){
			two++;
		}else if(group == 1){
			one++;
		}
	}
	if(three>one){
		one = 0;
		cab+=three;
	}else{
		one = one - three;
		cab+=three;
	}
	cab+= ceil((((float)two*2)+(float)one)/4);

	
	cout<<cab;
}