#include <iostream>

using namespace std;

int main()
{  int n,i,a,max1=0,max2=0;
   cin>>n;
   for(i=1;i<=n;i++)
   { cin>>a;
   if(a>max1)
   {   max2=max1;
       max1=a;}
   if(a>max2 && a<max1)
   { max2=a;} }
   cout<<max1<<" "<<max2;


    return 0;
}
