#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("DATE.IN");
ofstream fout("DATE.OUT");
int main() {

    int numbers[100];
    int count = 0;

    while (fin >> numbers[count]) {
        count++;
    }

    for (int i = count - 1; i >= 0; --i)
    //se iau numerele de la coada la cap, trecand din nou prin sirul memorat.
        {
        fout << numbers[i];

        if (i > 0)
        fout << " ";}

    return 0;
}
