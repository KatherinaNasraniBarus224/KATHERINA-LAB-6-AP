#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Assignment Operator
    a = 5;
    b = 7;

    // Arithmetic Operator
    // int tambah = a + b;
    // int kurang = a - b;
    // int kali = a * b;
    // float bagi = a / b;
    // int mod = a % b;

    // cout << "a + b = " << tambah << endl;
    // cout << "a - b = " << kurang << endl;
    // cout << "a * b = " << kali << endl;
    // cout << "a / b = " << bagi << endl;
    // cout << "a % b = " << mod << endl;


    // Relational Operator
    // cout << (a == b) << endl;
    // cout << (a < b) << endl;
    // cout << (a <= b) << endl;
    // cout << (a > b) << endl;
    // cout << (a >= b) << endl;
    // cout << (a != b) << endl;


    // Logical Operator
    // cout << (true && true) << endl; //--> dan 
    // cout << (true && false) << endl;
    // cout << (false && true) << endl;
    // cout << (false && false) << endl;

    // cout << (true || true) << endl;  //--> atau
    // cout << (true || false) << endl;
    // cout << (false || true) << endl;
    // cout << (false || false) << endl;

    // cout << !true << endl;  //--> ! = negasi
    // cout << !false << endl;

    
    // Bitwise Operator
    // cout << (4 & 7) << endl;
    // cout << (4 | 7) << endl;
    // cout << (4 ^ 7) << endl; //--> XOR
    // cout << (~4) << endl;
    // cout << (7 << 2) << endl; //--> SHL
    // cout << (7 >> 2) << endl;  //--> SHR


    // Shorthand
    // a = a + 2;
    // a += 2;  //--> menambahkan  2 ke a
    // a -= 2;
    // a *= 2;
    // a /= 2;

    // b = b + 3;
    // b += 3;
    // b -= 3;
    // b *= 3;
    // b /= 3;


    // Increment & Decrement Operator 
    // Post Increment --> peningkatan setelah
    cout << a++ << endl;
    cout << a << endl;

    // Pre Increment  --> peningkatan sebelum
    cout << a << endl;
    cout << ++a << endl;

    cout << endl;

    // Post Decrement --> penurunan setelah
    cout << b-- << endl;
    cout << b << endl;

    // Pre Decrement  --> penurunan sebelum
    cout << b << endl;
    cout << --b << endl;
}