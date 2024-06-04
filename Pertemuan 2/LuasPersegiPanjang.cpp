#include <iostream>
using namespace std;

int main() {
    float panjang, lebar, luas;

    cout << "Masukkan panjang : ";
    cin >> panjang;

    cout << "Masukkan lebar : ";
    cin >> lebar;

    luas = panjang * lebar; // menghitung nilai luas 

    cout << "Luas = " << luas << endl; // mengeluarkan output
}