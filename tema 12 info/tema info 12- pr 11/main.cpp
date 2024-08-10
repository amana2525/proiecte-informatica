#include <iostream>

using namespace std;

int main()
{ int n, m, i, nr=0;
  cout << "n="; cin>>n;
  cout << "m="; cin>>m;
  for (i=1; i<=m; i++)
  {
      cout << nr << " ";
      nr=nr+n;
  }
    return 0;
}
