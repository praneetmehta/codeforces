#include <bits/stdc++.h>
using namespace std;

int main()
{
	/**
	ifstream cin;
	ofstream cout;
	cin.open("input.txt");
	cout.open("output.txt");
	//*/
	long long n,m,a;
	long long tile;
	cin>>n>>m>>a;
	if(n%a==0)	    
	    n=n;	    
	else	    
	    n = n+a-n%a;	    
	if(m%a==0)	    
	    m=m;	    
	else
	    m = m+a-m%a;	    
	tile = n*m/(a*a);
	cout<<tile;
	return 0;
}