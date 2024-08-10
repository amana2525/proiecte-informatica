#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("prime.in");
ofstream fout("prime.out");
int main()
{
    int n,i,k,d;
    fin>>n;
    i=2;
    fin.close();
    while(n)
    { k=1;
      for(d=2;d<=i-1;++d)
      {if(i%d==0)
       k=0;
      }
      if(k==1)
      {fout<<i<<" ";
       --n;
      }
      ++i;
    }
    fout.close();
    return 0;
}
