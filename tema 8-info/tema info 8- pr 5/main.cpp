#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i,d,k=0,max=0,max2=0;
    cin>>n;
    for(i=1;i<=n-1;i++)
    {  k=0;
       for(d=2;d<=sqrt(i);d++)
      {if(i%d==0)
       k++;
      }
      if(k==0&&i>max)
      {max2=max;
      max=i;}
    }
    cout<<max<<" "<<max2;
    return 0;
}
