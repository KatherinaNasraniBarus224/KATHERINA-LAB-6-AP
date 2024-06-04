#include <iostream>
#include <vector>

using namespace std;

class Mahasiswa {
    //? Access Modifier
    private:
        string nama, nim;
        float nilai;

    //? Access Modifier
    public:
        //? Constructor Method
        Mahasiswa(string nama, string nim, float nilai) {
            this->nama = nama;
            this->nim = nim;
            this->nilai = nilai;
        }

        //? Getter Method
        string getNama() {
            return this->nama;
        }

        string getNim() {
            return this->nim;
        }

        float getNilai() {
            return this->nilai;
        }

        void display() {
            cout << "Nama  : " << this->getNama() << endl;
            cout << "NIM   : " << this->getNim() << endl;
            cout << "Nilai : " << this->getNilai() << endl;
        }
};

int main() {
    system("cls");

    // Mahasiswa mhs("Andi", "231401001", 87.2);      //? Instantiation
    // mhs.display();

    //! Error
    // cout << mhs.nama << endl;
    
    // cout << mhs.getNama() << endl;
    // cout << mhs.getNim() << endl;
    // cout << mhs.getNilai() << endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    string nama, nim;
    float nilai;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get();  //? Menggunakan cin.get() untuk membersihkan buffer setelah cin sebelumnya

        cout << "Masukkan nama : ";
        getline(cin, nama);  //? Menggunakan getline() untuk membaca nama yang mengandung spasi

        cout << "Masukkan NIM : ";
        cin >> nim;

        cout << "Masukkan nilai : ";
        cin >> nilai;
        //? Membuat objek Mahasiswa dengan menggunakan constructor
        Mahasiswa mhs(nama, nim, nilai);
        mahasiswa.push_back(mhs); //? Menambahkan objek Mahasiswa ke dalam vektor
    }

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        mahasiswa[i].display();//? Memanggil metode display() dari objek Mahasiswa
    }
    }
}
