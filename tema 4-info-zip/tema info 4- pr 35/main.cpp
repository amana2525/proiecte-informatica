#include <iostream>

using namespace std;

int main()
{
   int n,c1,c2,c3,nr=0, nr1=0;
    cin>>n;
    c1=n%10;
    c2=(n%100-c1)/10;
    c3=(((n%1000-c1)/10)-c2)/10;

    if((c1<=c2)&&(c1<=c3))
    {nr=nr*10+c1;c1=1000;}
    else if((c2<=c1)&&(c2<=c3))
       {nr=nr*10+c2;c2=1000;}
    else
    {
        nr=nr*10+c3;c3=1000;
    }
    cout<<nr<<endl;

    if(c1<=c2&&c1<=c3)
        {nr=nr*10+c1;c1=1000;}
    else if(c2<=c1&&c2<=c3)
       {nr=nr*10+c2;c2=1000;}
    else
    {nr=nr*10+c3;c3=1000;}

    if(c1<=c2&&c1<=c3)
    {nr=nr*10+c1;c1=1000;}
    else if(c2<=c1&&c2<=c3)
       {nr=nr*10+c2;c2=1000;}
    else
    {nr=nr*10+c3;c3=1000;}

    cout<<nr;
    return 0;
}
