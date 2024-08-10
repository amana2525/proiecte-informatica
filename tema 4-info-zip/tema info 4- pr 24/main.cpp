#include <iostream>

using namespace std;

int main()
{
    int x,p=0,k=0,c;
    cin>>x;
    if((x%10)%2==0)
    p=1;
    x=x/10;
    while(x)
    {c=x%10;
     x=x/10;
     if(c%2==0)
     k++;
    }
    if(k>0)
    cout<<"NU";
    else if(p==0)
    cout<<"NU";
    else
    cout<<"DA";
    return 0;
}
