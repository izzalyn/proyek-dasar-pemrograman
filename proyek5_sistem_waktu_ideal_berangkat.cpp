#include <iostream>
using namespace std;

int main() {
    int jamKuliah, menitKuliah;
    int mandi, sarapan, perjalanan;
    int totalPersiapan;
    int totalMenitKuliah, totalMenitBerangkat;
    int jamBerangkat, menitBerangkat;

    cout << "=== PERHITUNGAN WAKTU BERANGKAT KULIAH ===" << endl;
    
    cout << "Masukkan jam kuliah (0-23)  : ";
    cin >> jamKuliah;
    cout << "Masukkan menit kuliah (0-59): ";
    cin >> menitKuliah;
    
    cout << "Waktu mandi (menit)         : ";
    cin >> mandi;
    cout << "Waktu sarapan (menit)       : ";
    cin >> sarapan;
    cout << "Waktu perjalanan (menit)    : ";
    cin >> perjalanan;

    totalPersiapan = mandi + sarapan + perjalanan;
    totalMenitKuliah = (jamKuliah * 60) + menitKuliah;
    totalMenitBerangkat = totalMenitKuliah - totalPersiapan;

    jamBerangkat = totalMenitBerangkat / 60;
    menitBerangkat = totalMenitBerangkat % 60;

    cout << "\n==========================================" << endl;
    cout << "Total persiapan & perjalanan : " << totalPersiapan << " menit" << endl;
    cout << "Waktu ideal berangkat        : Jam " << jamBerangkat << ":" 
         << (menitBerangkat < 10 ? "0" : "") << menitBerangkat << endl;
    cout << "==========================================" << endl;

    return 0;
}