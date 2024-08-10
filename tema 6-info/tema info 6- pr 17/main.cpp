#include<iostream>
using namespace std;
int main()
{
    int a,b,r;
    cin>>a>>b;
    int x,y;
    x=a,y=b;
    if (a==0 && b==0)
        a=-1;
    while (b)
    {
        r=a%b;
        a=b;
        b=r;
    }
    int m,n;
    m=x/a;
    n=y/a;
    cout<<n*m << ' ' << a;
    return 0;
}
