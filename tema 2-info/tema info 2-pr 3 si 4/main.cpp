#include <iostream>

using namespace std;

int main()
{
    int n,i,a,max=0,min=99999999;
    cin>>n;
    for(i=1;i<=n;i++)
    {cin>>a;
    if(a>max)
    max=a;
    if(a<min)
    min=a;
    }
    cout<<max+min<<" e suma dintre minim si maxim";
    return 0;
}
