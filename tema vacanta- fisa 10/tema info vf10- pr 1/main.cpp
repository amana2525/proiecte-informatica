#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");
ofstream fout("bac.txt");
int main()
{   int n,i;
    fin>>n;
    fin.close();
    for(i=1;i<=n;i++)
    { fout<<i*3<<" ";
    }
    fout.close();
    return 0;
}
