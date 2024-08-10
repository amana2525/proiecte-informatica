#include <iostream>
using namespace std;

int n, fr[10];
int main()
{ int i,c;
 cin>>n;
 while(n)
 {c=n%10;
  n=n/10;
  fr[c]++;
 }
 for(i=0;i<=9;i++)
 {if(fr[i]>0)
  cout<<i;
 }
}
