#include <iostream>

using namespace std;

int main()
{ int i, n, s=0, d, sd=0;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      for (d=1; d<=i; d++)
        if (i%d==0)
        s=s+d;
      for (d=1; d<=s-1; d++)
        if (s%d==0)
        sd=sd+d;
      if (s==sd)
        cout << i << " ";
      else
        n++;
      s=0;
      sd=0;
  }
    return 0;
}
