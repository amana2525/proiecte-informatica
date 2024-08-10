#include<iostream>
using namespace std;
int main()
{
	int a,b,x,y,ndx,ndy,d;
	cin>>a>>b;
	for(x=a;x<=b;x++)
		for(y=x+1;y<=b;y++)
		{
			ndx=0;
			for(d=1;d<=x;d++)
				if(x%d==0) ndx++;
			ndy=0;
			for(d=1;d<=y;d++)
				if(y%d==0) ndy++;
			if(ndx==ndy) cout<<x<<" "<<y<<endl;
		}
	return 0;
}
