#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int n,d,div=99999;
    cin>>n;
    div=n;
    for(d=1;d<=sqrt(n);d++)
    {if(n%d==0 && d<div && d!=1)
        {div=d;}
    }
    cout<<div*div;
    return 0;
}
