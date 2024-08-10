#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int i, n, pal=0, d, k=0, c, aux;
  cout << "n="; cin>>n;
  for (i=2; i<=n; i++)
  {
      aux=i;
      while(i!=0)
      {

          c=i%10;
          i=i/10;
          pal=pal*10+c;
      }
      for (d=2; d<=sqrt(pal); d++)
        if (pal%d==0)
      {
          k++;
          if (d*d!=pal)
            k++;
      }
      if (k==0)
        cout << aux << " ";
      k=0;
  }
    return 0;
}
