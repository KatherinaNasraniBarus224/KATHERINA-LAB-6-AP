#include <iostream>
using namespace std;

int main() {
    a: 
        cout << "Hello World" << endl;
        goto d; // ke d
    b:
        cout << "Universitas Sumatera Utara" << endl;
        return 0;
    c:
        cout << "Fasilkom-TI" << endl;
        goto b; ,, //ke b
    d:
        cout << "Ilmu Komputer" << endl;
        goto c; // ke c

    int angka = 1;
    loop:
        cout << angka << " ";
        angka++; // Post Increment
    if(angka <= 10) {
        goto loop;
    }
}