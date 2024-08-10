#include <iostream>

using namespace std;

int main()
{ int n, x, y, z, auxx, auxy;
  cout << "n="; cin>>n;
  for (x=1; x<=n; x++)
    for (y=1; y<=n; y++)
  {
      auxx=x;
      auxy=y;
      while (auxx!=auxy)
        if (auxx>auxy)
        auxx=auxx-auxy;
      else
        auxy=auxy-auxx;
      if (auxx==1)
        for (z=1; z<=n; z++)
        if ((y*y)+(x*x)==(z*z))
        cout << x << " " << y << " " << z<<endl;
  }
    return 0;
}
