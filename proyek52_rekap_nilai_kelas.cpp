#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double nilai[5][3] = {
        {80, 85, 90},
        {75, 80, 85},
        {90, 95, 92},
        {70, 75, 80},
        {85, 90, 88}
    };
    
    string komponen[3] = {"Tugas", "UTS", "UAS"};
    double maxRata = -1;
    int mhsTerbaik = 0;

    cout << "--- TABEL NILAI MAHASISWA ---\n";
    cout << "No\tTugas\tUTS\tUAS\tRata-rata\n";
    
    for (int i = 0; i < 5; i++) {
        double totalMhs = 0;
        cout << i + 1 << "\t";
        for (int j = 0; j < 3; j++) {
            cout << nilai[i][j] << "\t";
            totalMhs += nilai[i][j];
        }
        double rataMhs = totalMhs / 3.0;
        cout << fixed << setprecision(1) << rataMhs << endl;
        
        if (rataMhs > maxRata) {
            maxRata = rataMhs;
            mhsTerbaik = i + 1;
        }
    }

    cout << "\n--- RATA-RATA KOMPONEN ---\n";
    for (int j = 0; j < 3; j++) {
        double totalKomponen = 0;
        for (int i = 0; i < 5; i++) {
            totalKomponen += nilai[i][j];
        }
        double rataKomponen = totalKomponen / 5.0;
        cout << komponen[j] << ": " << fixed << setprecision(1) << rataKomponen << endl;
    }

    cout << "\nMahasiswa dengan rata-rata tertinggi adalah Mahasiswa " << mhsTerbaik << " dengan nilai " << maxRata << endl;

    return 0;
}