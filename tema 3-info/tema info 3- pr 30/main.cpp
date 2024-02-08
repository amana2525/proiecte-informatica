#include <iostream>

using namespace std;

int main() {
 int c,n,p=1,r=0;
 cin>>n;
 while(n>0)
{
 c=n%10;
 if(c>2 && c<6)
{
 r=r+c*p;
 p=p*10;
 }
 n=n/10;
 }
 if (r==0)
{
 cout << "Nu exista cifre in intervalul (2, 6) in numarul dat." << endl;
 }
 else
{
 cout << "Numarul obtinut prin eliminarea cifrelor este: " << r << endl;
 }
 return 0;
}

