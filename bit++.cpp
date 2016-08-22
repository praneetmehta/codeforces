#include <bits/stdc++.h>
using namespace std;
int main(){
	/*
	ifstream cin;
	ofstream cout;
	cin.open("input.txt");
	cout.open("output.txt");
	//*/

	int x = 0;
	int n;
	cin>>n;
	string op;
	for(int i=0;i<n;i++){
		cin>>op;
		if(op == "++X"){
			++x;
		}else if(op == "--X"){
			--x;
		}else if(op == "X++"){
			x++;
		}else if(op == "X--"){
			x--;
		}
	}

	cout<<x;

	return 0;
}