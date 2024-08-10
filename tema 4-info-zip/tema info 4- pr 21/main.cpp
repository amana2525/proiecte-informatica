#include <iostream>

using namespace std;

int main()
{
    int x,x1=0,x2=0,c;
    cin>>x;
    while(x)
    {
      c=x%10;
      x=x/10;
      if(c%2==0)
      x1=x1*10+c;
      x1=x1*10+c;
    }
    while(x1)
    {
     x2=x2*10+x1%10;
     x1=x1/10;
    }
    cout<<x2;
    return 0;
}
