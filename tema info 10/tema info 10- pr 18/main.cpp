#include<iostream>
using namespace std;
int main()
{
	int a,b,s,d,x;
	cin>>a>>b;
	for(x=a;x<=b;x++)
	{
		s=0;
		for(d=1;d<x;d++)
			if(x%d==0) s=s+d;
		if(s==x) cout<<x<<" ";
	}
	return 0;
}
