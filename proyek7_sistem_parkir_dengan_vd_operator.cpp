#include <iostream>
using namespace std;

int main() {
    int jenis_kendaraan, lama_parkir, tarif_awal, tarif_berikutnya, total_bayar;

    cout << "=======================================" << endl;
    cout << "Nama    : Izza Ahmaddina" << endl;
    cout << "Jurusan : Informatika" << endl;
    cout << "NIM     : 1267050037" << endl;
    cout << "=======================================" << endl;
    cout << "Sistem Parkir & Kalkulasi Tarif" << endl;
    cout << "=======================================" << endl;

    cout << "Pilih Jenis Kendaraan:" << endl;
    cout << "1. Motor" << endl;
    cout << "2. Mobil" << endl;
    cout << "Masukkan pilihan (1/2): ";
    cin >> jenis_kendaraan;

    cout << "Masukkan lama parkir (dalam jam): ";
    cin >> lama_parkir;

    cout << "=======================================" << endl;

    if (jenis_kendaraan < 1 || jenis_kendaraan > 2 || lama_parkir <= 0) {
        cout << "Input tidak valid! Periksa pilihan kendaraan atau durasi jam." << endl;
    } 
    else {
        if (jenis_kendaraan == 1) {
            tarif_awal = 2000;
            tarif_berikutnya = 1000;
        } else {
            tarif_awal = 5000;
            tarif_berikutnya = 2000;
        }

        if (lama_parkir == 1) {
            total_bayar = tarif_awal;
        } else {
            total_bayar = tarif_awal + ((lama_parkir - 1) * tarif_berikutnya);
        }

        cout << "Total Biaya Parkir: Rp " << total_bayar << endl;

        if (lama_parkir >= 1 && lama_parkir <= 2) {
            cout << "Kategori Durasi: Parkir Sebentar" << endl;
        } 
        else if (lama_parkir >= 3 && lama_parkir <= 5) {
            cout << "Kategori Durasi: Parkir Sedang" << endl;
        } 
        else if (lama_parkir >= 6) {
            cout << "Kategori Durasi: Parkir Lama / Menginap" << endl;
        }
    }

    cout << "=======================================" << endl;
    return 0;
}
