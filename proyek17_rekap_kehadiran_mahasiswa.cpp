#include <iostream>
using namespace std;

int main() {
    int n;
    int hadir = 0;

    cout << "Masukkan jumlah pertemuan (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Pesan kesalahan: Jumlah pertemuan harus lebih besar dari 0." << endl;
    } else {
        for (int pertemuan = 1; pertemuan <= n; pertemuan++) {
            int status;
            cout << "Hari ke-" << pertemuan << " (1=Hadir, 0=Tidak): ";
            cin >> status;

            while (status != 0 && status != 1) {
                cout << "Input tidak valid. Masukkan ulang (1=Hadir, 0=Tidak): ";
                cin >> status;
            }

            if (status == 1) {
                hadir = hadir + 1;
            }
        }

        int tidakHadir = n - hadir;
        double persentase = static_cast<double>(hadir) * 100.0 / n;

        cout << " --- Rekap Kehadiran ---" << endl;
        cout << "Jumlah hadir = " << hadir << endl;
        cout << "Jumlah tidak hadir = " << tidakHadir << endl;
        cout << "Persentase kehadiran = " << persentase << "%" << endl;

        if (persentase >= 75.0) {
            cout << "Kategori: Kehadiran memenuhi syarat (minimal 75%)." << endl;
        } else {
            cout << "Kategori: Kehadiran tidak memenuhi syarat (di bawah 75%)." << endl;
        }
    }

    return 0;
}