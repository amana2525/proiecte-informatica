#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("BAC.IN");
ofstream fout("BAC.OUT");
int main()
{
    int n,d,k=0;
    fin>>n;
    fin.close();
    if(n>100)
    {for(d=100;d<=n;++d)
     { if(n%d==0)
       fout<<d<<" ";
       ++k;
     }
     if(k==0)
     fout<<"NU EXISTA";
    }
    else
     fout<<"NU EXISTA";
    fout.close();

    return 0;
}
