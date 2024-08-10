#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,d,i,k=0,s=0,p=1;
    cin>>n;
    for(i=2;i<=n/2;i++)
    {if(n%i==0)
     {  k=0;
        for(d=2;d<=sqrt(i);d++)
       {if(i%d==0)
        k++;}
       if(k==0)
       {s=s+i;
        p=p*i;}
     }
    }
    cout<<s<<endl;
    cout<<p<<endl;
    return 0;
}
