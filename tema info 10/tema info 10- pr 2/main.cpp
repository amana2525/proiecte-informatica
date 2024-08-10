#include <iostream>

using namespace std;

int main()
{int a,k=0,d,b,i,n,max;
 cin>>a>>b;
 for(i=a;i<=b;i++)
 { n=i;
   d=2;
   k=0;
   while(n>1)
   {if(n%d==0)
    {++k;
     while(n%d==0)
     {n/=d;}
     ++d;
    }
    else
    ++d;
   }
   if(k>=max)
   max=k;
 }

for(i=a;i<=b;i++)
 { n=i;
   d=2;
   k=0;
   while(n>1)
   {if(n%d==0)
    {++k;
     while(n%d==0)
     {n/=d;}
     ++d;
    }
    else
    ++d;
   }
   if(k==max)
   cout<<i<<" ";
 }
    return 0;
}
