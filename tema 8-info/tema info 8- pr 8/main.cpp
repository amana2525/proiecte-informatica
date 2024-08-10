#include <iostream>
using namespace std;
int main()
{
int n,i,nr,c,nrdiv1,nrdiv2,i2;
nr=1; i=1;
cin>>n;
while(nr<=n)
{
i2=i+2;
nrdiv1=0;
for(c=1;c*c<i;c++)
if(i%c==0)
nrdiv1+=1;
if(c*c!=i)
nrdiv1++;

nrdiv2=0;
for(c=1;c*c<i2;c++)
if(i2%c==0)
nrdiv2+=1;
if(c*c!=i2)
nrdiv2++;
if(nrdiv1==2&&nrdiv2==2)
{
cout <<"("<<i<<","<<i2<<") ";
nr++;
}
i=i+2;
}
return 0;
}
