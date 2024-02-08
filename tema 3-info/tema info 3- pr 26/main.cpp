#include <iostream>

using namespace std;

int main() {
 int x,y,z,k=0;
 cin>>x>>y>>z;
 for (int numar = 100000; numar <= 999999; ++numar)
 {int cifraSuteMii = (numar / 100000) % 10;
 int cifraMii = (numar / 10000) % 10;
 int cifraZeciMii = (numar / 1000) % 10;
 int sumaCifreSuteZeciUnitati = (numar / 100) % 10 + (numar / 10) % 10 + numar % 10;
 if (cifraSuteMii >= x && cifraMii == y && cifraZeciMii == y && sumaCifreSuteZeciUnitati == z)
 k++;
 }

 cout << " Numarul de numere de exact sase cifre care indeplinesc conditiile este: " << k << endl;
 return 0;}
