#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, c, i, aux, x, v=1, k=0, min=999999, min2, d;
  min2=min;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cout << "x="; cin>>x;
      aux=x;
      while (x!=0)
      {
          c=x%10;
          x=x/10;
          if (c!=1)
           for (d=2; d<=sqrt(c); d++)
          {
              if (c%d==0)
                k++;
          }
          if (k!=0)
            v=0;
          if (c==1)
                v=0;
      }
      if (v==1)
        if (aux<=min2)
            if (aux<=min)
                min=aux;
            else
                min2=aux;
      v=1;
      k=0;
  }
  cout << min << " " << min2;
    return 0;
}
