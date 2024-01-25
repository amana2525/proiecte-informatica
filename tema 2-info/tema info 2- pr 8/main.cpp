#include <iostream>

using namespace std;

int main()
{
    int n,max=0,k=0,i,a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
     cin>>a;
      if(a==max)
     k++;
     if(a>max && a%2==0)
     max=a;
     k=1;
     }

     cout<<max<<" de "<<k<<" ori";


    return 0;
}
