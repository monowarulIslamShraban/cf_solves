/*
Problem Link: https://codeforces.com/problemset/problem/270/A
Solve Link: https://codeforces.com/contest/270/submission/117325170
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	short int t;
	cin>>t;
	
	while(t--)
	{
		short int a;
		cin>>a;
		
		if(360%(180-a)==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
	return 0;
}