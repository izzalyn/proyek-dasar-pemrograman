#include <iostream>
#include <string>

using namespace std;

int main() {
    string hari[5] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat"};
    string slot[3] = {"08.00", "10.00", "13.00"};
    string matkul[5][3] = {
        {"Algoritma", "Pancasila", "Matematika"},
        {"Basis Data", "PWEB", "Struktur Data"},
        {"Bahasa Inggris", "PBO", "Jaringan"},
        {"Sistem Operasi", "Statistika", "Kalkulus"},
        {"Agama", "PKN", "Multimedia"}
    };

    for (int i = 0; i < 5; i++) {
        cout << "Hari " << hari[i] << ":" << endl;
        for (int j = 0; j < 3; j++) {
            cout << "  - Slot " << slot[j] << ": " << matkul[i][j] << endl;
        }
    }

    return 0;
}