#include <iostream>
using namespace std;

int main() {
    int n;
    int total = 0;
    int hariNol = 0;
    int maxUnit = 0;

    cout << "Masukkan jumlah hari (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Input tidak valid. Jumlah hari harus lebih besar dari 0." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            int unit;
            cout << "Penjualan hari ke-" << i << " (unit): ";
            cin >> unit;

            while (unit < 0) {
                cout << "Unit tidak boleh negatif. Masukkan ulang: ";
                cin >> unit;
            }

            total += unit;

            if (unit == 0) {
                hariNol++;
            }

            if (i == 1 || unit > maxUnit) {
                maxUnit = unit;
            }
        }

        double rataRata = static_cast<double>(total) / n;

        cout << " --- Ringkasan Statistik Penjualan ---" << endl;
        cout << "Total unit terjual = " << total << endl;
        cout << "Rata-rata per hari = " << rataRata << endl;
        cout << "Jumlah hari dengan penjualan nol = " << hariNol << endl;
        cout << "Penjualan tertinggi = " << maxUnit << endl;
    }

    return 0;
}