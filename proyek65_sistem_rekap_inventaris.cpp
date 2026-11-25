#include <iostream>
using namespace std;

int main() {
    const int JUMLAH_BARANG = 10;
    int stok[JUMLAH_BARANG];
    int totalStok = 0;

    for (int i = 0; i < JUMLAH_BARANG; i++) {
        cin >> stok[i];
        totalStok += stok[i];
    }

    int stokMaks = stok[0];
    int stokMin = stok[0];
    int kurangDariLima = 0;

    for (int i = 0; i < JUMLAH_BARANG; i++) {
        if (stok[i] > stokMaks) {
            stokMaks = stok[i];
        }
        if (stok[i] < stokMin) {
            stokMin = stok[i];
        }
        if (stok[i] < 5) {
            kurangDariLima++;
        }
    }

    int nilaiCari;
    cin >> nilaiCari;

    int jumlahCocok = 0;
    for (int i = 0; i < JUMLAH_BARANG; i++) {
        if (stok[i] == nilaiCari) {
            jumlahCocok++;
        }
    }

    cout << "Daftar stok 10 barang:" << endl;
    for (int i = 0; i < JUMLAH_BARANG; i++) {
        cout << "Barang ke-" << (i + 1) << " (indeks " << i << "): " << stok[i] << endl;
    }

    cout << "Total stok: " << totalStok << endl;
    cout << "Stok maksimum: " << stokMaks << endl;
    cout << "Stok minimum: " << stokMin << endl;
    cout << "Jumlah barang dengan stok < 5: " << kurangDariLima << endl;

    if (jumlahCocok > 0) {
        cout << "Stok dengan nilai " << nilaiCari << " ditemukan sebanyak " << jumlahCocok << " barang." << endl;
    } else {
        cout << "Stok dengan nilai " << nilaiCari << " tidak ditemukan." << endl;
    }

    return 0;
}