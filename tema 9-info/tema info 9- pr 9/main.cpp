#include<iostream>
using namespace std;
int main()
{
    int x,x1,c,nr=0,k=0,q=0,nr1=0,j;
    cin>>x;
    x1=x;
    while(x)
    {
      c=x%10;
      x=x/10;
      k++;
    }
    if(k%2==0)
    {   j=k/2;
        while(x1)
    {
     c=x1%10;
     x1=x1/10;
     q++;

     if(q==j+1)
     c=-1;
     else if(q==j)
     c=-1;

     if(c!=-1)
     nr=nr*10+c;
    }}

    else
    {j=(k+1)/2;
    while(x1)
    {c=x1%10;
     x1=x1/10;
     q++;

     if(q==j)
     c=-1;

     if(c!=-1)
     nr=nr*10+c;}
    }
    while(nr)
    {
      nr1=nr1*10+nr%10;
      nr=nr/10;
    }
    cout<<nr1;
    return 0;
}
