#include <iostream>

using namespace std;

int main()
{
   int n,c,j=0,k=0,q=0;
   cin>>n;
   while(n)
   {
      c=n%10;
      n=n/10;
      if(c==1)
        k++;
      if(c==0)
        q++;
      if(c!=0 && c!=1)
        j++;
   }
   if(j>0)
    cout<<"exista si alte numere"<<endl;
   if(k>0)
    cout<<"exista cifre de 1"<<endl;
   if(q>0)
    cout<<"exista cifre de 0"<<endl;
    return 0;
}
