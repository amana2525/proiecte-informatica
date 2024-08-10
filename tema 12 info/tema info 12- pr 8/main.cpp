#include <iostream>

using namespace std;

int main()
{ int n, x, i, max=0, min=99999999, auxmin, auxmax, r;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cout << "x="; cin>>x;
      if (x>max)
        max=x;
      if (x<min)
        min=x;
  }
  auxmin=min;
  auxmax=max;
  while (min!=0)
  {
      r=max%min;
      max=min;
      min=r;
  }
  cout << auxmin/max << "/" << auxmax/max;
    return 0;
}
