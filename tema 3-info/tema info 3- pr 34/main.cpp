#include <iostream>

using namespace std;

int main()
{
  int n,n1,k=0,c,c1;
  cin>>n;
  n1=n;
  while(n>9)
  {
     c=n%10;
     n=n/10;
  }

  while(n1)
  {
    c1=n1%10;
    n1=n1/10;
    if(c==c1)
    {k++;}
  }
    cout<<k;
    return 0;
}
