#include <iostream>

using namespace std;

int main()
{   int x,c,k=0,max=0;
    cin>>x;
    while(x)
    {
      c=x%10;
      x=x/10;
      if(c>max)
      {max=c;
        k=1;}
      else if(c==max)
       k++;}
      cout<<"cifra max e "<<max<<" si apare de "<<k<<" ori";
      return 0;
}
