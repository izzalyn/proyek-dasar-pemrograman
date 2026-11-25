#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah nilai (n): ";
    cin >> n;

    int nilai[n];
    int total = 0;

    for (int i = 0; i < n; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
        total += nilai[i];
    }

    double rata = static_cast<double>(total) / n;

    cout << "Total = " << total << endl;
    cout << "Rata-rata = " << rata << endl;

    return 0;
}