#include <iostream>

using namespace std;

int main()
{   int x,c,x1=0,x2;
    cin>>x;
    x2=x;
    while(x)
    {
      c=x%10;
      x=x/10;
      x1=x1*10+c;
    }
    if(x1==x2)
    cout<<"DA";
    else
    cout<<"NU";
    return 0;
}
