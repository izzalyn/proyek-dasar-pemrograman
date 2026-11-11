#include <iostream>

using namespace std;

int main() {
    double target;
    double setoran;
    double saldo = 0;
    int banyakSetoran = 0;

    cout << "Masukkan target tabungan: ";
    cin >> target;

    while (saldo < target) {
        cout << "Masukkan nominal setoran: ";
        cin >> setoran;

        if (setoran > 0) {
            saldo += setoran;
            banyakSetoran++;
            cout << "Setoran berhasil. Saldo saat ini: " << saldo << endl;
        } else {
            cout << "Setoran harus lebih besar dari 0!" << endl;
        }
    }

    cout << " Target tabungan telah tercapai!" << endl;
    cout << "Saldo Akhir    : " << saldo << endl;
    cout << "Banyak Setoran : " << banyakSetoran << " kali" << endl;

    return 0;
}