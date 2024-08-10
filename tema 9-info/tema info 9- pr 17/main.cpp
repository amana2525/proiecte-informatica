#include <iostream>

using namespace std;
int ap[10];
int main()
{
    int x,y,i,c,nr=0,nr1=0;
    cin>>x>>y;
    while(x)
    {
      c=x%10;
      x=x/10;
      ap[c]++;
    }
    while(y)
    {
     c=y%10;
     y=y/10;
     ap[c]++;
    }
    for(i=0;i<=9;i++)
    {while(ap[i])
     {
       nr=nr*10+i;
       ap[i]--;
     }
    }
    while(nr)
    {
     nr1=nr1*10+nr%10;
     nr=nr/10;
    }
    cout<<nr1;
    return 0;
}
