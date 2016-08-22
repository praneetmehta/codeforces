#include <bits/stdc++.h>
using namespace std;
int main(){
	/*
	ifstream cin;
	ofstream cout;
	cin.open("input.txt");
	cout.open("output.txt");
	//*/

	int n,m;
	char c;
	bool color = false;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>c;
			if(c=='C'|| c=='M'|| c=='Y'){
				color = true;
				break;
			}
		}
		if(color == true){
			break;
		}
	}
	if(color){
		cout<<"#Color";
	}else{
		cout<<"#Black&White";
	}
	return 0;
}