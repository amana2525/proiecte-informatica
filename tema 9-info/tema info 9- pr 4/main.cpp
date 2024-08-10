#include <iostream>
using namespace std;

int apci[10];
int main(){

long int n,rezultat=0;
int i,c,nr=0,cimp=-1,nrimp=0,apc;
cin>>n;

while(n>0)
{
c=n%10;
apci[c]++;
nr++;
n=n/10;
}

for(i=0;i<10;i++){
cout<<apci[i]<<" ";
if(apci[i]%2==1){
nrimp++;
}
}
cout<<endl;
if((nr%2==0&&nrimp>0)||(nr%2==1&&nrimp!=1)){
cout<<"Nu se poate forma palindrom";
return 0;}

for(i=9;i>=0;i--){
if(apci[i]>0){
apc=apci[i];
while(apc>1){
rezultat=rezultat*10+i;
apc=apc/2;
}

if(apci[i]%2==1){
cimp=i;
}
}
}

if(nrimp==1){
rezultat=rezultat*10+cimp;
}

for(i=0;i<=9;i++){
if(apci[i]>0){
apc=apci[i];
while(apc>1){
rezultat=rezultat*10+i;
apc=apc/2;
}
}
}

cout<<rezultat;

return 0;
}
