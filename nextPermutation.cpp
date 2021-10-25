#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permute(string &s,int l,int h)
{
	if(l == h)
	{
		cout << s<< endl;
		return;
	}


	for(int i=l; i <= h; i++)
	{
		swap(s[l],s[i]);
		permute(s,l+1,h);
		swap(s[l],s[i]);
	}
}
int main()
{
	string s;
	cin >> s;

	permute(s,0,s.length()-1);

}