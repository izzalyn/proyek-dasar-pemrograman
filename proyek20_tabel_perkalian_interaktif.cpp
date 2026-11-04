#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka untuk tabel perkalian: ";
    cin >> angka;

    cout << " --- Tabel Perkalian " << angka << " ---" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << angka << " x " << i << " = " << angka * i << endl;
    }

    return 0;
}