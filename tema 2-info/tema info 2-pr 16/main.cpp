#include <iostream>

using namespace std;

int main()
{
    int n,k=0,a,b,i,s,max=0;
    cin>>n;
    for(i=1;i<=n/2;i++)
    { cin>>a>>b;
    if(a>b)
    {s=a-b;}
    else
    {s=b-a;}
    if(s>max)
    { max=s;
    k=1;}
    else
    {if(s=max)
    k++;
    }
    }
    cout<<s<<" de "<<k<<" ori";
    return 0;
}
