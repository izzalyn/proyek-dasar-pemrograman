#include <iostream>
using namespace std;

int main() {
    int n;
    int total = 0;
    int jumlahTarget = 0;
    int minimum = 0;

    cout << "Masukkan jumlah hari (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Input tidak valid. Jumlah hari harus lebih besar dari 0." << endl;
    } else {
        for (int hari = 1; hari <= n; hari++) {
            int durasi;
            cout << "Durasi belajar hari ke-" << hari << " (menit): ";
            cin >> durasi;

            while (durasi < 0) {
                cout << "Durasi tidak boleh negatif. Masukkan ulang: ";
                cin >> durasi;
            }

            total += durasi;

            if (durasi >= 60) {
                jumlahTarget++;
            }

            if (hari == 1 || durasi < minimum) {
                minimum = durasi;
            }
        }

        double rataRata = static_cast<double>(total) / n;

        cout << " --- Hasil Monitoring Aktivitas Belajar ---" << endl;
        cout << "Total durasi = " << total << " menit" << endl;
        cout << "Rata-rata per hari = " << rataRata << " menit" << endl;
        cout << "Jumlah hari dengan durasi minimal 60 menit = " << jumlahTarget << endl;
        cout << "Durasi minimum = " << minimum << " menit" << endl;
    }

    return 0;
}