#include <iostream>
using namespace std;

int main() {
    float alas, tinggi, luas;

    cout << "==================================" << endl;
    cout << "Nama : Izza Ahmaddina" << endl;
    
    cout << "NIM : 1267050037" << endl;
    cout << "Jurusan : Informatika" << endl;
    cout << "==================================" << endl;
    cout << "Menghitung Luas Segitiga" << endl;
    cout << "==================================" << endl;

    cout << "Masukkan alas segitiga: ";
    cin >> alas;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    cout << "Masukkan luas segitiga: ";
    cin >> luas;

    cout << "Luas segitiga = " << (alas * tinggi) / 2 << endl;

    cout << "==================================" << endl;

    return 0;
}