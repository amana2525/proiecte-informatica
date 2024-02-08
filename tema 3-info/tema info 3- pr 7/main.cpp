#include <iostream>

using namespace std;

int main()
{
    int n,k=0,q=0,c;
    cin>>n;
    while(n)
    {
      c=n%10; n=n/10;
      if(c%2==0)
            k++;
      else
        q++;
    }
    cout<<k<<" cifre pare si "<<q<<" cifre impare";
    return 0;
}
