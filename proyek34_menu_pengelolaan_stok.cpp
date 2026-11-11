// * Nama        : Izza Ahmaddina
// * Mata Kuliah : Pemrograman Dasar
// * Tugas       : Tugas 3 - Menu Pengelolaan Stok

#include <iostream>

using namespace std;

int main() {
    int pilihan;
    int stok = 0;
    int jumlah;

    do {
        cout << " === MENU PENGELOLAAN STOK ===" << endl;
        cout << "1. Tambah stok" << endl;
        cout << "2. Lihat stok" << endl;
        cout << "3. Kurangi stok" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Masukkan jumlah penambahan stok: ";
            cin >> jumlah;
            if (jumlah > 0) {
                stok += jumlah;
                cout << "Stok berhasil ditambahkan." << endl;
            } else {
                cout << "Jumlah harus lebih besar dari 0!" << endl;
            }
        } else if (pilihan == 2) {
            cout << "Jumlah stok saat ini: " << stok << endl;
        } else if (pilihan == 3) {
            cout << "Masukkan jumlah pengurangan stok: ";
            cin >> jumlah;
            if (jumlah > 0) {
                if (stok - jumlah >= 0) {
                    stok -= jumlah;
                    cout << "Stok berhasil dikurangi." << endl;
                } else {
                    cout << "Gagal! Stok tidak boleh menjadi negatif." << endl;
                }
            } else {
                cout << "Jumlah harus lebih besar dari 0!" << endl;
            }
        } else if (pilihan != 0) {
            cout << "Pilihan menu tidak valid!" << endl;
        }

    } while (pilihan != 0);

    cout << "Terima kasih, program selesai." << endl;
    return 0;
}