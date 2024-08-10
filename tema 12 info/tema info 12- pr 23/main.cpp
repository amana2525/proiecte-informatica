#include <iostream>

using namespace std;

int main()
{
    int n,i,i1,i2,a,a1,s,c,d,p,im,max1=0,max2=0,max3=0;
    cin>>n;
    for(i=1;i<=n;i++)
    { cin>>a;
      a1=a;
      s=0;
      while(a1)
      {c=a1%10;
       a1/=10;
       if(c%2==1)
       s=s+c;
      }
      im=0;
      p=0;
      for(d=1;d<=s;++d)
      { if(s%d==0)
        if(d%2==0)
        p=p+d;
        else
        im=im+d;
      }
      if(p==im)
      { if(a>max1)
        {max3=max2;
        max2=max1;
        max1=a;}
        else if(a>max2)
        {max3=max2;
        max2=a;}
        else if(a>max3)
        max3=a;
      }
    }
    cout<<max1<<" "<<max2<<" "<<max3;
    return 0;
}
