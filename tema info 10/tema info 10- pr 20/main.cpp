#include <iostream>

using namespace std;

    int main()
{
    int b,c,k=0,a=0,tmp=0;
    cin>>tmp;
    while (1>0)
    {
    a=tmp;
    cin>>tmp;
    if(a==tmp)
    {break;}
    b=a;
    c=tmp;
    if(b!=c)
    {while(b!=c)
     { if(b>c)
       b=b-c;
       else
       c=c-b;
     }
    }
    if(b==1)
    ++k;
    }
    cout<<k;
    return 0;
}
