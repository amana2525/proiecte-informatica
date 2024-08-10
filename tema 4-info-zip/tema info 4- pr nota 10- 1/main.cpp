#include <iostream>

using namespace std;

int main()
{
    int n,n1,s=0,p=1,c;
    cin>>n;
    n1=n;
    while(n)
    {
        c=n%10;
        n=n/10;
        if(c%2==0)
        p=p*c;
        else
        s=s+c;
    }
    while(n1>9)
    {n1=n1/10;
    c=n1;
    }
    if(p%c==s%c)
    cout<<"Da";
    else
    cout<<"Nu";
    return 0;
}
