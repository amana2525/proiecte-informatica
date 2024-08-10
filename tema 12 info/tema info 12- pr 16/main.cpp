#include <iostream>

using namespace std;

int main()
{ int a, b, uc, x;
  cout << "a="; cin>>a;
  cout << "b="; cin>>b;
  for (x=a; x<=b; x++)
  {
      uc=x%10;
      if (x%uc==0)
        cout << x << " ";
  }
    return 0;
}
