#include <iostream>
using namespace std;

int main() {
    bool aktif;
    int hadir;
    bool tugasLengkap;
    bool bayarUKT;

    cout << "Apakah status mahasiswa aktif? (1 = Ya, 0 = Tidak): ";
    cin >> aktif;

    cout << "Apakah UKT sudah dibayar? (1 = Ya, 0 = Tidak): ";
    cin >> bayarUKT;

    cout << "Masukkan persentase kehadiran (0-100): ";
    cin >> hadir;

    cout << "Apakah tugas sudah lengkap? (1 = Ya, 0 = Tidak): ";
    cin >> tugasLengkap;

    cout << "-----------------------------------" << endl;

    if (aktif == true) {
        if (hadir >= 75) {
            if (tugasLengkap == true) {
                if (bayarUKT == true) {
                    cout << "BOLEH UJIAN" << endl;
                } else {
                    cout << "UKT BELUM DIBAYAR" << endl;
                }
            } else {
                cout << "TUGAS BELUM LENGKAP" << endl;
            }
        } else {
            cout << "KEHADIRAN TIDAK MEMENUHI" << endl;
        }
    } else {
        cout << "STATUS TIDAK AKTIF" << endl;
    }

    return 0;
}
