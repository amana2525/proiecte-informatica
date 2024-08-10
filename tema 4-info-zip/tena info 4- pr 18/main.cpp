#include <iostream>

using namespace std;

int main()
{ int a,x,b,c,nr=0,nr1=0;
    cin>>x>>a>>b;
    while(x)
    {
     c=x%10;
     x=x/10;
     if(c==a)
     c=b;
     nr=nr*10+c;
    }
    while(nr)
    {
     nr1=nr1*10+nr%10;
     nr=nr/10;
    }
    cout<<nr1;
    return 0;
}
