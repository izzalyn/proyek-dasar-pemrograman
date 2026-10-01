#include <iostream>
using namespace std;

int main() {
    float tugas_mandiri, tugas_terstruktur, uts, uas;
    float nilaiAkhir;

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

cout << "==================================" << endl;

    return 0;
}