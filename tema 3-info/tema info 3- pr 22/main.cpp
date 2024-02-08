#include <iostream>

using namespace std;

int main()
{
    int n,a,i,c,k=0,q=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"a=";cin>>a;

        while(a)
        {
          c=a%10;
          a=a/10;
          if(c%2==0)
         k++;
         else
            q++;
        }
    }
    cout<<k<<" cifre pare si "<<q<<" cifre impare";
    return 0;
}
