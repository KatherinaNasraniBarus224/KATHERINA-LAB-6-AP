#include <iostream>
using namespace std;
int main()
{
   float r,volume,luas;
   const float phi=3.14; // membuat kontanta phi 3.14
   cout<<" masukkan jari-jari : "; // input jari-jari
   cin >> r;
   luas = 4 * phi *r * r; // menghitung luas
   volume= (4.0/3.0) * phi *r *r * r; // menghitung volume
   cout<< "volume = "<<volume<<endl;
   cout<< "luas = "<<luas<<endl;
   
}