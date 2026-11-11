// * Nama        : Izza Ahmaddina
// * Mata Kuliah : Dasar Pemrograman
// * Tugas       : Tugas 4 - Tebak Angka Sederhana

#include <iostream>

using namespace std;

int main() {
    int angkaRahasia = 75;
    int tebakan;
    int jumlahPercobaan = 0;

    cout << "=== PERMAINAN TEBAK ANGKA ===" << endl;
    cout << "Tebak angka antara 1 s.d. 100" << endl;

    cout << "Masukkan tebakan Anda: ";
    cin >> tebakan;
    jumlahPercobaan++;

    while (tebakan != angkaRahasia) {
        if (tebakan < angkaRahasia) {
            cout << "Terlalu kecil! Coba lagi." << endl;
        } else {
            cout << "Terlalu besar! Coba lagi." << endl;
        }

        cout << "Masukkan tebakan Anda: ";
        cin >> tebakan;
        jumlahPercobaan++;
    }

    cout << " Selamat! Tebakan Anda benar." << endl;
    cout << "Jumlah percobaan: " << jumlahPercobaan << " kali" << endl;

    return 0;
}