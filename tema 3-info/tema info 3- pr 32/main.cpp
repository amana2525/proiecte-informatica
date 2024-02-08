#include <iostream>

using namespace std;

int main() {
 int n,c, k=0,q=0;
 cin >> n;
 while (n > 0)
{
 c=n%10;
 if (c == 2)
 {
 k++;
 }
 else if (c == 3)
{
 q++;
 }
 n=n/10;
 }
 if (k>q) {
 cout << "2" << endl;
 } else if(k<q) {
 cout << "3" << endl;
 } else {
 cout <<"egale"<<endl;
 }
 return 0;
}
