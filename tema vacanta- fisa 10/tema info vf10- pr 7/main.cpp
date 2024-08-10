#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("BAC.IN");
ofstream fout("BAC.OUT");
int main()
{
    int n,a;
    fin>>n;
    while(n)
    {fin>>a;
     --n;
     if(a>1000)
     fout<<a<<endl;
    }
    return 0;
}
