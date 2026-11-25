#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int N = 6;
    int nilai[N], total = 0, lulus = 0;

    for (int i = 0; i < N; i++) {
        cout << "Nilai mahasiswa " << i + 1 << ": ";
        cin >> nilai[i];
    }

    int tertinggi = nilai[0], terendah = nilai[0];
    for (int i = 0; i < N; i++) {
        total += nilai[i];
        if (nilai[i] > tertinggi) tertinggi = nilai[i];
        if (nilai[i] < terendah) terendah = nilai[i];
        if (nilai[i] >= 70) lulus++;
    }

    double rata = static_cast<double>(total) / N;
    cout << " --- REKAP NILAI --- ";
    for (int i = 0; i < N; i++) {
        cout << "Mahasiswa " << i + 1 << ": " << nilai[i] << endl;
    }

    cout << "Total: " << total << endl;
    cout << fixed << setprecision(2) << "Rata-rata: " << rata << endl;
    cout << "Tertinggi: " << tertinggi << endl;
    cout << "Terendah: " << terendah << endl;
    cout << "Jumlah lulus: " << lulus << endl;
    return 0;
}