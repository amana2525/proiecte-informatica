#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, a, b, d, k=0, v=1, x;
  cout << "n="; cin>>n;
  for (x=1; x<=n; x++)
  for (a=2; a<=x-2; a++)
  {
      b=x-a;
      for (d=2; d<=sqrt(a); d++)
        if (a%d==0)
      {
          k++;
          if (d*d!=a)
            k++;
      }
      if (k!=0)
        v=0;
      k=0;
      if (v==1&&a!=1)
         for (d=2; d<=sqrt(b); d++)
        if (b%d==0)
      {
          k++;
          if (d*d!=b)
            k++;
      }
      if (k!=0)
        v=0;
      if (v==1&&b!=1)
        {cout << x << endl;
         x++;}
      v=1;
      k=0;
  }
    return 0;
}
