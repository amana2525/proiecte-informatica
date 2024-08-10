#include <iostream>

using namespace std;
int apcx[10];
int apcy[10];

int main()
{
    int x,y,cx,cy,i,x1,y1,m=0,k=0,q=0,max=0;
    cin>>x>>y;
    x1=x; y1=y;
    while(x)
    {cx=x%10;
     x/=10;
     apcx[cx]++;
    }
    while(y)
    {cy=y%10;
     y/=10;
     apcy[cy]++;
    }
    for(i=0;i<=9;i++)
    {if(apcx[i]>0 && apcy[i]>0)
     cout<<i;
    }
    cout<<" "<<endl;
    for(i=9;i>=0;i--)
    {if(apcx[i]>0 && apcy[i]>0 && i>=max)
     {cout<<i;
      max=i;}
    }
    cout<<" "<<endl;
    for(i=0;i<=9;i++)
    {if(apcx[i]==0 && apcy[i]==0)
     cout<<i;
    }
    for(i=0;i<=9;i++)
    {if(apcx[i]>=1)
     k++;
     if(apcy[i]>=1)
     m++;
    }
    cout<<" "<<endl;
    for(i=0;i<=9;i++)
    {if(apcx[i]>0 &&apcy[i]>0)
     {if(apcx[i]==apcy[i])
     q++;}
    }
    if(k==m && q==k && x1!=y1)
    cout<<"DA";
    else
    cout<<"NU";
    return 0;
}
