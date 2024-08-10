#include <iostream>

using namespace std;

int main()
{ int n, x, k=0, v=1, c, uc, i, aux, min=9999999;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cout << "x="; cin>>x;
      aux=x;
      uc=x%10;
      while (x!=0)
      {
          c=x%10;
          x=x/10;
          if (c!=uc)
            v=0;
      }
      if (v==1)
        if (aux<min)
        {
            min=aux;
            k=1;
        }
        else if (aux==min)
            k++;
      v=1;
  }
  cout << min << " " << k;
    return 0;
}
