#include <iostream>
using namespace std;

int main() {
    int nilai[5];
    int total = 0;
    int jumlahLebihBesar = 0;

    for (int i = 0; i < 5; i++) {
        cin >> nilai[i];
        total += nilai[i];
    }

    double rata = static_cast<double>(total) / 5.0;

    for (int i = 0; i < 5; i++) {
        if (nilai[i] > rata) {
            jumlahLebihBesar += nilai[i];
        }
    }

    cout << "Rata-rata: " << rata << endl;
    cout << "Jumlah nilai > rata-rata: " << jumlahLebihBesar << endl;

    return 0;
}