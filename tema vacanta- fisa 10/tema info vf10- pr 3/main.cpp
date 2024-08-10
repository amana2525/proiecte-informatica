#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");
ofstream fout("bac.txt");

int main()
{   int n,i;
    fin>>n;
    fin.close();
    for(i=n;i>=1;--i)
    { if(n%i==0)
      fout<<i<<" ";
    }
    fout.close();

    return 0;
}
