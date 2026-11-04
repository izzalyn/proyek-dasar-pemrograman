#include <iostream>
using namespace std;

int main() {
    int nilai;
    int total = 0;
    const int banyakData = 5;

    for (int i = 1; i <= banyakData; i++) {
        cout << "Masukkan nilai ke-" << i << ": ";
        cin >> nilai;
        total += nilai;
    }

    double rataRata = static_cast<double>(total) / banyakData;

    cout << "Total nilai = " << total << endl;
    cout << "Rata-rata = " << rataRata << endl;

    return 0;
}