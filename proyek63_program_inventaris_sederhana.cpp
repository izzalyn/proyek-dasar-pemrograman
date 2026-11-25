#include <iostream>
using namespace std;

int main() {
    int stok[8];
    int total = 0;

    for (int i = 0; i < 8; i++) {
        cin >> stok[i];
        total += stok[i];
    }

    int terbanyak = stok[0];
    int tersedikit = stok[0];

    for (int i = 1; i < 8; i++) {
        if (stok[i] > terbanyak) {
            terbanyak = stok[i];
        }
        if (stok[i] < tersedikit) {
            tersedikit = stok[i];
        }
    }

    cout << "Total stok: " << total << endl;
    cout << "Stok paling banyak: " << terbanyak << endl;
    cout << "Stok paling sedikit: " << tersedikit << endl;

    return 0;
}