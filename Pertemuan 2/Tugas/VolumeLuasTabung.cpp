#include <iostream>
using namespace std;

int main() {
    float r, volume, t, s, luas;
    const float phi = 3.14; // membuat konstanta phi 3.14

    cout << "Masukkan jari-jari : ";
    cin >> r;
    cout << "Masukkan tinggi : ";
    cin >> t;
    cout << "Masukkan garis pelukis : ";
    cin >> s;

    luas = phi * r * (r + s); // menghitung luas
    volume = (1.0/ 3.0) * phi * r * r * t; // menghitung volume

    cout << "Volume = " << volume << endl;
    cout << "Luas = " << luas << endl;

    return 0;
}