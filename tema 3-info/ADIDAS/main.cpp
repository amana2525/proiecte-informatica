#include <iostream>

using namespace std;

int main() {
 int n;
 cin >> n;
 int a, max = -1;
 for (int i=0;i<=n;++i) {
 cin >> a;
 int z = a/ 100000; // Prima cifrã
 int b = (a / 10000) % 10; // A doua cifrã
 int c = (a / 1000) % 10; // A treia cifrã
 int d = (a / 100) % 10; // A patra cifrã
 int e = (a / 10) % 10; // Penultima cifrã
 int f = a % 10; // Ultima cifrã
 if (a >= 100000 && a <= 999999 &&
 z != b && z!= c && z != f && b != c && b != f && c != f &&
 d == b &&
 e == z &&
 a > max) {
 max= a;
 }
 }
 if (max!=-1) {
 cout << "Cel mai mare numar ADIDAS este: " <<max << endl;
 } else {
 cout << "Nu exista numar ADIDAS in sirul dat." << endl;
 }
 return 0;
}
