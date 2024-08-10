#include <iostream>
#include <cmath>

using namespace std;

int main()
{ int n, d, a, b, v=1, x, k=0;
  cout << "n="; cin>>n;
  for (x=1; x<=n; x++)
    for (a=2; a<=x; a++)
    if (x%a==0)
  {
      b=x/a;
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
      if (v==1)
        for (d=2; d<=sqrt(b); d++)
        if (b%d==0)
      {
          k++;
          if (d*d!=b)
            k++;
      }
      if (k==0)
      cout << x<< " ";
  }
    return 0;
}
