#include <iostream>

using namespace std;

int main()
{ int n, nr=1, i;
  cout << "n="; cin>>n;
  for (i=1; i<=n; i++)
  {
      nr=nr*2;
      cout << nr << " ";
  }
      return 0;
}
