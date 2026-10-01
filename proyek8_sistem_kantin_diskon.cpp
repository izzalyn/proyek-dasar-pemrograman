#include <iostream>
using namespace std;

int main() {
    int paket_makanan, jumlah_porsi, harga_per_porsi, total_harga, potongan_diskon, total_akhir;

    cout << "=======================================" << endl;
    cout << "Nama    : Izza Ahmaddina" << endl;
    cout << "Jurusan : Informatika" << endl;
    cout << "NIM     : 1267050037" << endl;
    cout << "=======================================" << endl;
    cout << "Sistem Kantin & Kalkulasi Diskon" << endl;
    cout << "=======================================" << endl;

    cout << "Menu Paket Makanan (Edisi Diskon Besar):" << endl;
    cout << "1. Paket Nasi Ayam (Rp 15.000 - Diskon 25%)" << endl;
    cout << "2. Paket Nasi Goreng (Rp 12.000 - Diskon 20%)" << endl;
    cout << "Masukkan pilihan paket (1/2): ";
    cin >> paket_makanan;

    cout << "Masukkan jumlah porsi yang dibeli: ";
    cin >> jumlah_porsi;

    cout << "=======================================" << endl;

    if (paket_makanan < 1 || paket_makanan > 2 || jumlah_porsi <= 0) {
        cout << "Input tidak valid! Periksa pilihan menu atau jumlah porsi." << endl;
    } 
    else {
        if (paket_makanan == 1) {
            harga_per_porsi = 15000;
            total_harga = jumlah_porsi * harga_per_porsi;
            potongan_diskon = total_harga * 0.25; 
        } else {
            harga_per_porsi = 12000;
            total_harga = jumlah_porsi * harga_per_porsi;
            potongan_diskon = total_harga * 0.20; 
        }

        total_akhir = total_harga - potongan_diskon;

        cout << "Total Harga Awal : Rp " << total_harga << endl;
        cout << "Potongan Diskon  : Rp " << potongan_diskon << endl;
        cout << "Total yang Dibayar: Rp " << total_akhir << endl;

        if (jumlah_porsi >= 1 && jumlah_porsi <= 3) {
            cout << "Kategori Pembelian: Porsi Standar" << endl;
        } 
        else if (jumlah_porsi >= 4 && jumlah_porsi <= 10) {
            cout << "Kategori Pembelian: Porsi Keluarga" << endl;
        } 
        else if (jumlah_porsi > 10) {
            cout << "Kategori Pembelian: Porsi Pesta / Acara Besar" << endl;
        }
    }

    cout << "=======================================" << endl;
    return 0;
}
