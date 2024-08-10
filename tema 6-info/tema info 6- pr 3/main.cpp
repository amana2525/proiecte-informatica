#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,p,i,k=0,s=0,x,d,max=0,min=9999999;
    cin>>n;
    cin>>p;
    for(x=1;x<=p;x++)
    {cin>>i;
    if(i>=max)
      {max=i;
      k=0;
      {for(d=1;d<=sqrt(i);d++)
      {if(i%d==0)
      {k++;
      if(d!=sqrt(i))
      k++;}
      }}}

      if(i<=min)
      {   min=i;
          s=0;
          while(i)
        { s=s+(i-(i/10)*10);
          i=i/10;
        }
      }
    }
    cout<<"suma "<<s<<endl;
    cout<<"nr div "<<k<<endl;
    return 0;
}
