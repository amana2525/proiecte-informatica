#include <iostream>

using namespace std;

int main()
{
    int n,c,max=0,min=9999999;
    cin>>n;
    while(n)
    { c=n%10;
      n=n/10;
      if(c%2==0 && max<c)
      max=c;
      if(c%2==1 && min>c)
      min=c;
    }
    cout<<min+max;
    return 0;
}
