#include <iostream>

using namespace std;

int main() {
 int n;
 cin >> n;
 int a, max = -1;
 for (int i=0;i<=n;++i) {
 cin >> a;
 int z = a/ 100000; // Prima cifr�
 int b = (a / 10000) % 10; // A doua cifr�
 int c = (a / 1000) % 10; // A treia cifr�
 int d = (a / 100) % 10; // A patra cifr�
 int e = (a / 10) % 10; // Penultima cifr�
 int f = a % 10; // Ultima cifr�
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
