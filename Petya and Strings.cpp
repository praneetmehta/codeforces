#include <bits/stdc++.h>
using namespace std;

int main(){
	/*
	ifstream cin;
	ofstream cout;
	cin.open("input.txt");
	cout.open("output.txt");
	//*/

 	string s1, s2;
 	cin>>s1>>s2;

 	for(int i=0;i<s1.length();i++){
 		if(s1[i]>=65 && s1[i]<=90){
 			s1[i]+=32;
 			
 		}
 		if(s2[i]>=65 && s2[i]<=90){
 			s2[i]+=32;

 		}
 		if((int)s1[i]>(int)s2[i]){
 			cout<<1;
 			break;
 		}else if((int)s1[i]<(int)s2[i]){
 			cout<<-1;
 			break;
 		}
 		if(i == s1.length()-1)
 			cout<<0;
 	}

	return 0;
}