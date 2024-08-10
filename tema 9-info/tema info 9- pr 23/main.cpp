#include <iostream>

using namespace std;

int main()
{
    int x,x1=0,nr=1,x2=0,x3,c,k=0;
    cin>>x;
    while(x)
    {
     c=x%10;
     x=x/10;
    if(c!=0)
    x1=x1*10+c;
    else
    k++;
    }
    while(x1)
    {
     x2=x2*10+x1%10;
     x1/=10;
    }

    while(k)
    {
        nr=nr*10;
        k--;
    }
    x3=x2*nr;
    cout<<x3;
    return 0;
}
