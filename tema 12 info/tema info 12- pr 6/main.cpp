#include <iostream>

using namespace std;

int main()
{ int n, d, max=0, a, b, i;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      cout << "a="; cin>>a;
      cout << "b="; cin>>b;
      for (d=2; d<=b-1; d++)
        if (b%d==0)
        d=max;
      if (a==max)
        cout << a << " "<< b << " ";
  }
    return 0;
}
