// * Nama        : Izza Ahmaddina
// * Mata Kuliah : Pemrograman Dasar
// * Tugas       : Tugas 1 - Validasi Nilai Ujian

#include <iostream>

using namespace std;

int main() {
    int nilai;

    do {
        cout << "Masukkan nilai ujian (0-100): ";
        cin >> nilai;

        if (nilai < 0 || nilai > 100) {
            cout << "Nilai tidak valid! Silakan masukkan nilai 0-100." << endl;
        }
    } while (nilai < 0 || nilai > 100);

    cout << "Kategori Nilai: ";
    if (nilai >= 85) {
        cout << "A" << endl;
    } else if (nilai >= 75) {
        cout << "B" << endl;
    } else if (nilai >= 60) {
        cout << "C" << endl;
    } else {
        cout << "D" << endl;
    }

    return 0;
}