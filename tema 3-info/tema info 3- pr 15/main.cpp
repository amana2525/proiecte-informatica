#include <iostream>

using namespace std;

int main()
{
   int n, q=0,k,x=0,c;
   cin>>n>>k;
   while(n)
   {
       c=n%10; n=n/10;
       k++;
       if(c<=k)
        q++;

   }
   if(x=q)
    cout<<"DA";
   else
    cout<<"NU";
    return 0;
}
