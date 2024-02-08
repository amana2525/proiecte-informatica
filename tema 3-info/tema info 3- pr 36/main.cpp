#include <iostream>

using namespace std;

int main()
{
    int a,b,c,k=0,q=0,a1,a2,b1,b2;
    cin>>a>>b;
    a1=a;
    a2=a;
    b2=b;
    while(a)
    {
    a=a/10;
    k++;}
    b1=b;
    while(b)
    {b=b/10;
    q++;
    }
    if(k>=q)
    {
    while(b1>9)
    {c=b1%10;
     b1=b1/10;
    }
    while(q)
    {a1=a1/10;
    q--;}
    if((a1%10+c)>=10)
    cout<<"nu stie sa calculeze, insa poate lua "<<a2+b2<<" bomboane";
    else
    cout<<"stie sa calculeze faptul ca poate lua "<<a2+b2<<" bomboane";
    }
    else
    {
    while(a1>9)
    {c=a1%10;
     a1=a1/10;
    }
    while(k)
    {b1=b1/10;
    k--;}
    if((b1%10+c)>=10)
    cout<<"nu stie sa calculeze, insa poate lua "<<a2+b2<<" bomboane";
    else
    cout<<"stie sa calculeze faptul ca poate lua "<<a2+b2<<" bomboane";

    }
    return 0;
}
