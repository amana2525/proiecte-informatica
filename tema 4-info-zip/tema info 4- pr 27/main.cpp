#include <iostream>

using namespace std;

int main()
{
    int i,x,x1;
 cout<<"Dati valoarea lui x =";cin>>x;
 for(i=1;i<=9;i+=2)
 {
 x1=x;
 int gasit=0;
 int x2=0;
 while(x1!=0)
 {
 if(x1%10==i)
 {
 x1=x1/10;
 gasit=1;
 }
 else
 {
 x2=x2*10+x1%10;
 x1=x1/10;
 }
 }
x1=0;
 while(x2!=0)
 {
 x1=x1*10+x2%10;
 x2=x2/10;
 }
 if(gasit==1)cout<<"Numarul obtinut dupa eliminarea cifrei "<<i<<" este "<<x1<<endl;
 }
    return 0;
}
