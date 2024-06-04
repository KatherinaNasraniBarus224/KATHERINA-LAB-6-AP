#include <iostream>
using namespace std;

int main() {
    const float phi = 3.14; //mendeklarasikan konstanta phi

    float r, t, v;

    cout << "Masukkan jari-jari : ";
    cin >> r;

    cout << "Masukkan tinggi : ";
    cin >> t;

    v = phi * r * r * t;

    cout << "Volume = " << v << endl;
    return 0;
}