#include <iostream>

using namespace std;

int main()
{   int x,c,k=0,q=0,e=0;
    cin>>x;
    e=x%10;
    while(x)
    {
     c=x%10;
     x=x/10;
     if(c==e)
     q++;
     k++;
    }
    if(k==q)
    cout<<"DA";
    else
    cout<<"NU";
    return 0;
}
