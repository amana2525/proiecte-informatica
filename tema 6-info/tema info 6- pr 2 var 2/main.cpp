#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,a=0,d;
    cin>>n;
    for(d=1;d<=sqrt(n);d++)
    {if(d==sqrt(n))
     a=1;
    }
    if(a==1)
    cout<<"DA";
    else
    cout<<"NU";
    return 0;
}
