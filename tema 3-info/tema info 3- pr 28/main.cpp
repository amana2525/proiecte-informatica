#include <iostream>

using namespace std;

int main()
{ int n,a,c,k=0,q=0,i;

   cin>>n;
   for(i=1;i<=n;i++)
   {   k=0;
       cin>>a;
       while(a)
       {
         c=a%10;
         a=a/10;
         if(c=0)
         k++;
       }
       if(k>=1)
        q++;
   }
   cout<<q;
    return 0;
}
