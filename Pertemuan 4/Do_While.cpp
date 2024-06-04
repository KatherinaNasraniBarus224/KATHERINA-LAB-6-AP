#include <iostream>
using namespace std;

int main() {
    int angka = 1;
    do {
        cout << angka << " ";
        angka++; // Post Increment
    } while(angka <= 10); // LOOP  terus sampai lebih dari 10

    angka = 1;
    do {
        cout << angka << " ";
        angka++;
    } while(angka > 10);
}