#include <iostream>

using namespace std;

int main()
{ int a, b, s=0, d=2, p, n, aux;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  for (n=a; n<=b; n++)
  {   aux=n;
      while (n>1)
      {
          if (n%d==0)
          {
              p=0;
              while (n%d==0)
              {
                  p++;
                  n=n/d;
              }
              s=s+p;
          }
          ++d;
      }
      d=2;
      if (s%2==0)
        cout << aux << " ";
      s=0;
  }
    return 0;
}
