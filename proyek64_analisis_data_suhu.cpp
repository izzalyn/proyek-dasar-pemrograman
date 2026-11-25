#include <iostream>
using namespace std;

int main() {
    const int HARI = 7;
    double suhu[HARI];
    double hasil[5];

    double total = 0;
    for (int i = 0; i < HARI; i++) {
        cin >> suhu[i];
        total += suhu[i];
    }

    double rataRata = total / HARI;
    double tertinggi = suhu[0];
    double terendah = suhu[0];
    int hariAtasRata = 0;
    int hariBawah30 = 0;

    for (int i = 0; i < HARI; i++) {
        if (suhu[i] > tertinggi) {
            tertinggi = suhu[i];
        }
        if (suhu[i] < terendah) {
            terendah = suhu[i];
        }
        if (suhu[i] > rataRata) {
            hariAtasRata++;
        }
        if (suhu[i] < 30) {
            hariBawah30++;
        }
    }

    // Menyimpan hasil perhitungan ke dalam array agar keluaran berasal dari array
    hasil[0] = rataRata;
    hasil[1] = tertinggi;
    hasil[2] = terendah;
    hasil[3] = static_cast<double>(hariAtasRata);
    hasil[4] = static_cast<double>(hariBawah30);

    cout << "Daftar suhu 7 hari:" << endl;
    for (int i = 0; i < HARI; i++) {
        cout << "Hari ke-" << (i + 1) << ": " << suhu[i] << endl;
    }

    cout << "Rata-rata suhu: " << hasil[0] << endl;
    cout << "Suhu tertinggi: " << hasil[1] << endl;
    cout << "Suhu terendah: " << hasil[2] << endl;
    cout << "Jumlah hari di atas rata-rata: " << static_cast<int>(hasil[3]) << endl;
    cout << "Jumlah hari di bawah 30 derajat: " << static_cast<int>(hasil[4]) << endl;

    return 0;
}