#include <iostream>

using namespace std;

int main()
{
   int x,x1,x2,x3=0,x4=0,unit,zeci,c,c1,c2,nrdr,k=0;
   cin>>x;
   unit=x%10;
   zeci=(x%100-x%10)/10;
   nrdr=x%100;
   x1=x;x2=x;
   while(x>9)
   {
    x=x/10;
    c=x;
   }
   while(x1>99)
   {
    x1=x1/10;
    c1=x1;
   }
   cout<<unit<<" "<<zeci<<" "<<nrdr<<" "<<c<<" "<<c1;
   while(x2)
   {
     c2=x2%10;
     x2=x2/10;
     k++;
     if(k%2==1)
     {c2=20;}
     if(c2!=20)
     {x3=x3*10+c2;}
   }
   while(x3)
   {
     x4=x4*10+x3%10;
     x3=x3/10;
   }
   cout<<" "<<x4;
    return 0;
}
