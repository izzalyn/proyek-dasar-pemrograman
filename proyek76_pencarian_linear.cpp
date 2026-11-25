#include <iostream>
using namespace std;

int main() {
    const int N = 6;
    int data[N] = {12, 25, 18, 40, 31, 18};
    int cari, posisi = -1;

    cout << "Angka yang dicari: ";
    cin >> cari;

    for (int i = 0; i < N; i++) {
        if (data[i] == cari) {
            posisi = i;
            break;
        }
    }

    if (posisi != -1)
        cout << "Ditemukan pada indeks " << posisi << endl;
    else
        cout << "Data tidak ditemukan." << endl;

    return 0;
}