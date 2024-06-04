#include <iostream>
using namespace std;

int main() {
    // Loop for pertama: Mencetak "Hello World" sebanyak 10 kali
    for(int i = 1; i <= 10; i++) {
        cout << "Hello World" << endl;
    }
     // Loop for kedua: Mencetak bilangan genap dari 1 hingga 20
    for(int i = 1; i <= 20; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
        }
    }
     // Loop bersarang: Mencetak pola bintang berukuran 4x4
    for(int baris = 1; baris <= 4; baris++) {
        for(int kolom = 1; kolom <= 4; kolom++) {
            cout << "* ";
        }
        cout << endl;
    }
    // Loop bersarang: Mencetak segitiga bintang
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    int n, num = 0, sum = 0;

    cout << "Masukkan suku ke : ";
    cin >> n;
     // Loop for ketiga: Mencetak suku-suku ke-n dari sebuah deret
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            num = num;
        } else {
            num += 5;
        }
        sum += num;

        cout << num << " ";
    }
    cout << endl;
    
    cout << "Suku ke " << n << " adalah " << num << endl;
    cout << "Jumlah hingga suku ke " << n << " adalah " << sum << endl;
}