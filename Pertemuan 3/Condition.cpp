#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai: "; // Menginput nilai
    cin >> nilai;

    // If Statement
    if (nilai < 65) {
        cout << "Tidak Lulus" << endl;
    }
    
    // If-Else Statement
    if (nilai < 65) {
        cout << "Tidak Lulus" << endl;
    } else {
        cout << "Lulus" << endl;
    }

    // If-Else-If Statement
    if (nilai < 65) {
        cout << "Tidak Lulus" << endl;
    } else if (nilai > 65) {
        cout << "Lulus" << endl;
    } else if (nilai == 65) {
        cout << "Lulus dengan nilai pas" << endl;
    }

    // Nested If
    if (nilai < 0 || nilai > 100) {
        cout << "Tidak valid" << endl;
    } else {
        if (nilai < 65) {
            cout << "Tidak Lulus" << endl;
        } else if (nilai > 65) {
            cout << "Lulus" << endl;
        } else if (nilai == 65) {
            cout << "Lulus dengan nilai pas" << endl;
        }
    }

    // Switch Case
    switch (nilai) {
        case 1:
            cout << "Senin" << endl;
            break;
        case 2:
            cout << "Selasa" << endl;
            break;
        case 3:
            cout << "Rabu" << endl;
            break;
        case 4:
            cout << "Kamis" << endl;
            break;
        case 5:
            cout << "Jumat" << endl;
            break;
        case 6:
            cout << "Sabtu" << endl;
            break;
        case 7:
            cout << "Minggu" << endl;
            break;
        default:
            cout << "Tidak Valid" << endl;
            break;  // Opsional
    }

    // Switch Case For Range
    switch (nilai) {
        case 90 ... 100:
            cout << "A" << endl;
            break;
        case 85 ... 89:
            cout << "B+" << endl;
            break;
        case 80 ... 84:
            cout << "B" << endl;
            break;
        case 75 ... 79:
            cout << "C+" << endl;
            break;
        case 70 ... 74:
            cout << "C" << endl;
            break;
        case 65 ... 69:
            cout << "D" << endl;
            break;
        case 0 ... 64:
            cout << "E" << endl;
            break;
        default:
            cout << "Tidak valid" << endl;
    }

    // Ternary Operator (Shorthand If-Else)
    string tipe = (nilai > 0) ? "Positif" : "Negatif"; // Menetapkan "Positif" jika nilai lebih besar dari 0, jika tidak "Negatif"
    cout << tipe << endl;
}