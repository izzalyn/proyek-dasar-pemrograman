#include <iostream>
using namespace std;

int main() {
    cout << "===============================================" << endl;
    cout << "Nama  : Izza Ahmaddina" << endl;
    cout << "NIM   : 1267050037" << endl;
    cout << "Kelas : B-informatika" << endl;
    cout << "===============================================" << endl;
    cout << "   MINI PROJECT: SISTEM EVALUASI MAHASISWA" << endl;
    cout << "===============================================" << endl << endl;

    int aktif, statusTugas;
    float ipk;
    int kehadiran, nilaiAkhir;

    cout << "Status Aktif (1=Ya, 0=Tidak): "; cin >> aktif;
    
    cout << "Masukkan IPK (0.0 - 4.0): "; cin >> ipk;
    if (ipk < 0.0 || ipk > 4.0) {
        cout << "Error: IPK tidak valid (harus 0 - 4)!" << endl;
        return 0; 
    }

    cout << "Masukkan Persentase Kehadiran (0-100): "; cin >> kehadiran;
    if (kehadiran < 0 || kehadiran > 100) {
        cout << "Error: Persentase kehadiran tidak valid (harus 0 - 100)!" << endl;
        return 0;
    }

    cout << "Masukkan Nilai Akhir (0-100): "; cin >> nilaiAkhir;
    if (nilaiAkhir < 0 || nilaiAkhir > 100) {
        cout << "Error: Nilai akhir tidak valid (harus 0 - 100)!" << endl;
        return 0;
    }

    cout << "Status Tugas Lengkap (1=Ya, 0=Tidak): "; cin >> statusTugas;
    cout << endl << "--------------------------------------------------" << endl;

    cout << "HASIL EVALUASI:" << endl;

    if (aktif == 1) {
        if (kehadiran >= 75 && nilaiAkhir >= 70 && statusTugas == 1) {
            cout << "LULUS - ";
            if (nilaiAkhir >= 80) cout << "Grade A";
            else cout << "Grade B";
            cout << " - Dapat mengikuti program berikutnya." << endl;
        } else {
            cout << "TIDAK LULUS - ";
            if (nilaiAkhir >= 80 && nilaiAkhir <= 100) cout << "Grade A";
            else if (nilaiAkhir >= 70 && nilaiAkhir <= 79) cout << "Grade B";
            else if (nilaiAkhir >= 60 && nilaiAkhir <= 69) cout << "Grade C";
            else if (nilaiAkhir >= 50 && nilaiAkhir <= 59) cout << "Grade D";
            else cout << "Grade E";
            
            cout << " - ";
            if (kehadiran < 75) {
                cout << "Kehadiran di bawah batas minimal 75%." << endl;
            } else if (nilaiAkhir < 70) {
                cout << "Nilai akhir di bawah batas minimal 70." << endl;
            } else {
                cout << "Tugas belum lengkap." << endl;
            }
        }
    } else {
        cout << "TIDAK LULUS - ";
        if (nilaiAkhir >= 80 && nilaiAkhir <= 100) cout << "Grade A";
        else if (nilaiAkhir >= 70 && nilaiAkhir <= 79) cout << "Grade B";
        else if (nilaiAkhir >= 60 && nilaiAkhir <= 69) cout << "Grade C";
        else if (nilaiAkhir >= 50 && nilaiAkhir <= 59) cout << "Grade D";
        else cout << "Grade E";
        cout << " - Status mahasiswa tidak aktif." << endl;
    }

    cout << "===============================================" << endl;

    return 0;
}
