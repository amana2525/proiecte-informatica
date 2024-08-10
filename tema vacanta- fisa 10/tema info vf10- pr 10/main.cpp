#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");
ofstream fout("cifre.txt");

int main()
{   int n;
    fin>>n;
    if((n>9)&&(n<100))
     fout<<n<<" ";
     else
     if((n<-9)&&(n>-100))
     fout<<n<<" ";
    while(n!=0)
     {fin>>n;
     if((n>9)&&(n<100))
     fout<<n<<" ";
     else
     if((n<-9)&&(n>-100))
     fout<<n<<" ";}
    fin.close();
    fout.close();
    return 0;
}
