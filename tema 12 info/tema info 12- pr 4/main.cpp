#include <iostream>

using namespace std;

int main()
{
    int i,a,b,d,c,i1;
    for(i=1000;i<=9999;i++)
    { i1=i;
      while(i1>9)
      i1/=10;
      a=i%10;
      b=i1;
      c=(i%100-i%10)/10;
      d=(i%1000-i%100)/100;
    if(a+b==c+d)
    cout<<i<<" ";
    }
    return 0;
}
