#include <iostream>

using namespace std;

int main()
 {int x,x1,i,nr_ap;
 cout<<"x= ";cin>>x;
 for(i=0;i<=9;i++)
 {
 x1=x;
 nr_ap=0;
 while(x1!=0)
 {
 if(x1%10==i)
 nr_ap++;
 x1=x1/10;
 }
 if(nr_ap!=0)cout<<" Cifra "<<i<<" apare de "<<nr_ap<<" ori !"<<endl;
 }
 for(i=9;i>=0;i--)
 {
 x1=x;
 nr_ap=0;
 while(x1!=0)
 {
 if(x1%10==i)
 nr_ap++;
 x1=x1/10;
 }
 if(nr_ap==0)cout<<" Cifra "<<i<<" nu apare "<<endl;
 }
 return 0;}
