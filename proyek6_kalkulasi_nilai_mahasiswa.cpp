#include <iostream>
using namespace std;

int main() {
    int tugas_mandiri, tugas_terstruktur, uts, uas, nilaiAkhir;
cout << "==================================" << endl;
cout << "Nama : Izza Ahmaddina" << endl;
cout << "Jurusan : Informatika" << endl;
cout << "NIM : 1267050037" << endl;
cout << "==================================" << endl;
cout << "Menghitung Nilai Akhir Mahasiswa" << endl;
cout << "==================================" << endl;
    
    cout << "Nilai Tugas Mandiri : ";
    cin >> tugas_mandiri;
    
    cout << "Nilai Tugas Terstruktur : ";
    cin >> tugas_terstruktur;
    
    cout << "Nilai UTS : ";
    cin >> uts;
    
    cout << "Nilai UAS : ";
    cin >> uas;

    nilaiAkhir = (tugas_mandiri * 0.2) + (tugas_terstruktur * 0.2) + (uts * 0.2) + (uas * 0.4);

    cout << "Nilai Akhir : " << nilaiAkhir << endl;

    if (nilaiAkhir < 0 || nilaiAkhir > 100) {
        cout << "Nilai tidak valid";
    } 
    else if (nilaiAkhir >= 0 && nilaiAkhir <= 49) {
        cout << "Nilai anda adalah E";
    } 
    else if (nilaiAkhir >= 50 && nilaiAkhir <= 59) { 
        cout << "Nilai anda adalah D";
    } 
    else if (nilaiAkhir >= 60 && nilaiAkhir <= 69) {
        cout << "Nilai anda adalah C";
    } 
    else if (nilaiAkhir >= 70 && nilaiAkhir <= 79) {
        cout << "Nilai anda adalah B";
    } 
    else if (nilaiAkhir >= 80 && nilaiAkhir <= 100) {
        cout << "Nilai anda adalah A";
    }

    cout << endl;
    return 0;
}
