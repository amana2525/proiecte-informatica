#include <iostream>

using namespace std;

int main()
{
    int n,a,nr1=0,i,d,nr=0,k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>a;
     nr=nr*10+(a%10);
    }
    for(d=1;d<=nr;d++)
    {if(nr%d==0)
     k++;
    }
    if(k==2)
    cout<<"prim";
    else
    cout<<"compus";
    return 0;
}
