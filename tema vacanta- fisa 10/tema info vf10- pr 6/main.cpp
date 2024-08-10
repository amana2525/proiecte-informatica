#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("NUMERE.IN");
ofstream fout("NUMERE.OUT");
int main()
{
    int n,a,b,c;
    fin>>n>>a>>b;
    while(n)
    {fin>>c;
     --n;
     if((a<=c)&&(c<=b))
     fout<<c<<" ";
    }
    fin.close();
    fout.close();
    return 0;
}
