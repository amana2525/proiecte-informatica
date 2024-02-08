#include <iostream>

using namespace std;

int main()
{
    int n,i,a,k=0,max=0,c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
      cin>>a;
      while(a)
      {
        c=a%10;
        a=a/10;
        if(c>max)
        max=c;
      }
      if(max%2==1)
        k++;
      max=0;
    }
    cout<<k;
    return 0;
}
