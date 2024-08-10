#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("BAC.IN");
ofstream fout("BAC.TXT");
int main()
{
    int n,n1;
    fin>>n;
    fin.close();
    while(n)
    {n1=n;
     while(n1)
     {fout<<n1<<" ";
      --n1;
     }
     fout<<" "<<endl;
     --n;
    }
    fout.close();
    return 0;
}
