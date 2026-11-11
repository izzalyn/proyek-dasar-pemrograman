// * Nama        : Izza Ahmaddina
// * Mata Kuliah : Pemrograman Dasar
// * Tugas       : Tugas 2 - Penghitung Rata-rata

#include <iostream>

using namespace std;

int main() {
    double nilai, total = 0;
    int banyakData = 0;

    cout << "Nilai (-1 selesai): ";
    cin >> nilai;

    while (nilai != -1) {
        if (nilai >= 0) {
            total += nilai;
            banyakData++;
        }
        cout << "Nilai (-1 selesai): ";
        cin >> nilai;
    }

    cout << "Data: " << banyakData << " | Total: " << total;
    if (banyakData > 0) cout << " | Rata: " << total / banyakData;
    cout << endl;

    return 0;
}