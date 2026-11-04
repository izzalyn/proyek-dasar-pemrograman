#include <iostream>
using namespace std;

int main() {
    int n;
    int total = 0;
    int jumlahLulus = 0;
    int tertinggi = 0;
    int terendah = 0;

    cout << "Masukkan jumlah mahasiswa (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah mahasiswa harus lebih besar dari 0." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            int nilai;
            cout << "Masukkan nilai mahasiswa ke-" << i << " (0-100): ";
            cin >> nilai;

            
            while (nilai < 0 || nilai > 100) {
                cout << "Nilai tidak valid! Masukkan angka antara 0 - 100: ";
                cin >> nilai;
            }

            total += nilai;

            
            if (nilai >= 60) {
                jumlahLulus++;
            }

            
            if (i == 1) {
                tertinggi = nilai;
                terendah = nilai;
            } else {
                if (nilai > tertinggi) {
                    tertinggi = nilai;
                }
                if (nilai < terendah) {
                    terendah = nilai;
                }
            }
        }

        double rataRata = static_cast<double>(total) / n;

        cout << " --- STATISTIK NILAI KELAS ---" << endl;
        cout << "Total Nilai        : " << total << endl;
        cout << "Rata-rata Kelas    : " << rataRata << endl;
        cout << "Nilai Tertinggi    : " << tertinggi << endl;
        cout << "Nilai Terendah     : " << terendah << endl;
        cout << "Jumlah Mhs Lulus   : " << jumlahLulus << endl;
    }

    return 0;
}