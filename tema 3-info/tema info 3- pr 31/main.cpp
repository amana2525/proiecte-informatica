#include <iostream>

using namespace std;

int main() {
 int n,c,c1,n1,k=0,nr;
 cin>>n;
 n1=n;
 while(n1>99)
 { c=n1%10;
   n1=n1/10;
 }
  nr=n1%10;
 while(n)
{
 c1=n%10;
 if (c>nr)
 k++;
 n=n/10;
 }
 cout << "Numarul de cifre mai mari decat a doua cifra este: " << k << endl;
 return 0;
}
