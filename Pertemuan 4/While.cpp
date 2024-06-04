#include <iostream>
using namespace std;

int main() {
    int angka = 1;
    // Loop while pertama: Mencetak angka dari 1 hingga 10
    while (angka <= 10) {
        cout << angka << " ";
        angka++;
    }
     // Loop while kedua: Mencetak bilangan genap dari 1 hingga 20
    int angka = 1;
    while (angka <= 20) { 
        if (angka % 2 == 0) { //  sisa bagi angka dengan 2 adalah 0
            cout << angka << " ";
        }
        angka++;
    }

}