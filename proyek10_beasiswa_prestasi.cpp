#include <iostream>
using namespace std;

int main() {
    bool aktif;
    float ipk; 
    bool prestasiAkademik;
    bool prestasiNonAkademik;

    cout << "Apakah status mahasiswa aktif? (1 = Ya, 0 = Tidak): ";
    cin >> aktif;

    cout << "Masukkan IPK mahasiswa : ";
    cin >> ipk;

    cout << "Apakah mahasiswa memiliki prestasi akademik? (1 = Ya, 0 = Tidak): ";
    cin >> prestasiAkademik;

    cout << "Apakah mahasiswa memiliki prestasi non-akademik? (1 = Ya, 0 = Tidak): ";
    cin >> prestasiNonAkademik;

    cout << "-----------------------------------" << endl;

    if (aktif && ipk >= 3.50) {
        if ((prestasiAkademik == true) || 
            (prestasiNonAkademik == true)) {
            cout << "LOLOS SELEKSI AWAL" << endl;
        } else {
            cout << "PRESTASI BELUM MEMENUHI" << endl;
        }
    } else {
        cout << "SYARAT DASAR TIDAK MEMENUHI" << endl;
    } 

    return 0; 
}
