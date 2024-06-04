#include <iostream>
#include <vector>
using namespace std;
//? Mendefinisikan struktur Mahasiswa
struct Mahasiswa {
    string nama, nim;
    float nilai;
};
//? Mendefinisikan typedef untuk struktur Siswa
typedef struct {
    string nama, nim;
} Siswa;

int main() {
    system("cls");

    Mahasiswa mhs;
    vector<Mahasiswa> mahasiswa; //? Membuat vektor dari struct Mahasiswa
    int n;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;
    //? Loop untuk menginput data mahasiswa
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cin.get();

        cout << "Masukkan nama : ";
        getline(cin, mhs.nama);  //? Menggunakan getline() untuk membaca nama yang mengandung spasi

        cout << "Masukkan NIM : ";
        cin >> mhs.nim;

        cout << "Masukkan nilai : ";
        cin >> mhs.nilai;

        mahasiswa.push_back(mhs);
    }

    for (int i = 0; i < n; i++) {
        cout << mahasiswa[i].nama << " memiliki NIM " << mahasiswa[i].nim << " dan nilai " << mahasiswa[i].nilai << endl;
    }
}