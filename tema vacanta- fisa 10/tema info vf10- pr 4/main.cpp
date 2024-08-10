#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.in");
ofstream fout("numere.out");
int v[1000];
int main()
{
    int n,s=0,c,n1,m;
    fin>>n;

    n1=n;
    while(n)
    { fin>>c;
      s=s+c;
      v[c]++;
      --n;
    }
    fin.close();
    m=s/n1;
    fout<<v[m];
    fout.close();
    return 0;
}
