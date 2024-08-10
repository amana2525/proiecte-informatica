#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,n1=0,d,k=0;
    cin>>n;
    while(n!=0)
    {n1=n1*10+n%10;
     n=n/10;
    }
    for(d=1;d<=sqrt(n1);d++)
    {if(n1%d==0)
    {k++;
    if(d!=n1/d)
        {k++;}}}
    cout<<k;
    return 0;
}
