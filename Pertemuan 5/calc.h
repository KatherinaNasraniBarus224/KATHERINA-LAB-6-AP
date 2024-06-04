#include <math.h>

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}
// Fungsi untuk membagi dua bilangan bulat dan menghasilkan hasilnya dalam bentuk float
float bagi(int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b);
}
// Fungsi untuk menghitung sisa pembagian dua bilangan bulat (modulo)
int modulo(int a, int b) {
    return a % b;
}

int pangkat(int a, int b) {
    return pow(a, b);
}