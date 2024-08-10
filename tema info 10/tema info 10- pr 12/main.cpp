
#include<iostream>
using namespace std;
int main()
{
	int n,x,y,p,d,ok=0;
	cout<<"n=";	cin>>n;
    for(x=2;x<=n/2;x++)
	{
		p=1;
		for(d=2;d<=x/2;d++)
			if(x%d==0) p=0;
		y=n-x;
		for(d=2;d<=y/2;d++)
			if(y%d==0) p=0;
		if(p) { cout<<x<<" "<<y<<endl;
			    ok=1;
		}
	}
	if(!ok) cout<<"imposibil";
	return 0;
}
