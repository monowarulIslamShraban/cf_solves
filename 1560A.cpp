/*
Problem Link: https://codeforces.com/problemset/problem/1560/A
Solve Link: https://codeforces.com/contest/1560/submission/126470355
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int k;
		cin>>k;
		
		for(int i=0; ; i++)
		{
			if(i%3==0 or i%10==3)
				continue;
			if(--k==0)
			{
				cout<<i<<"\n";
				break;
			}
		}
	}
	
	return 0;
}