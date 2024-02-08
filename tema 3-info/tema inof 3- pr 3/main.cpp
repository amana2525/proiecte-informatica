#include <iostream>

using namespace std;

int main()
{
   int n,c,p=1;
   cin>>n;
   while(n)
   {c=n%10;
   n=n/10;
   if(c%2==1)
    p=p*c;
   }
   cout<<p;
    return 0;
}
