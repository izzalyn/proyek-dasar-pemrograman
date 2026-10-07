#include <iostream>
using namespace std;

int main() {

    cout << "===============================================" << endl;
    cout << "Nama  : Izza Ahmaddina" << endl;
    cout << "NIM   : 1267050037" << endl;
    cout << "Kelas : B-informatika" << endl;
    cout << "===============================================" << endl;
    cout << "       SISTEM UKT DAN STATUS PEMBAYARAN" << endl;
    cout << "===============================================" << endl << endl;

    int aktif, sudahBayar; 
    int kelompokUKT;

    cout << "Status Aktif (1=Ya, 0=Tidak): "; 
    cin >> aktif;
    cout << "Kelompok UKT: "; 
    cin >> kelompokUKT;
    cout << "Sudah Bayar (1=Ya, 0=Tidak): "; 
    cin >> sudahBayar;

    cout << "-----------------------------------" << endl;

    if (aktif == 1) {
        if (sudahBayar == 1) {
            cout << "AKTIF - LUNAS" << endl;
        } else {
            if (kelompokUKT == 1 || kelompokUKT == 2) {
                cout << "AKTIF - BELUM LUNAS" << endl;
            } else {
                cout << "AKTIF - MENUNGGU PEMBAYARAN" << endl;
            }
        }
    } else {
        cout << "STATUS TIDAK AKTIF" << endl;
    }

    return 0;
}
