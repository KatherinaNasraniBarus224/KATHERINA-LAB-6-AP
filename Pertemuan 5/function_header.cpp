#include <iostream>
#include "operasi.h"  // Menyertakan file header operasi.h yang berisi deklarasi fungsi operasi aritmatika
#include "preprocessor.h" // Menyertakan file header preprocessor.h yang berisi definisi makro PI


uns; // Mendefinisikan uns sebagai salah satu dari dua jenis berkas preprocessor (baris ke-5 dari preprocessor.h)


void sayHello(string name) {
    o << "Hello " << name << n;
}

void garis() {
    o << "================" << n;
}

void bintang() {
    o << "***" << n;
}

int main() {
    system("cls");
    sayHello("AP6");
    garis();
    bintang();
    o << tambah(2, 3) << n;
    o << kurang(2, 3) << n;
    o << kali(2, 3) << n;
    o << bagi(2, 3) << n;
    o << PI << n;
    return 0;
}