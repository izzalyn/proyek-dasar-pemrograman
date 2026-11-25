#include <iostream>
using namespace std;

int main() {
    int nilai[5] = {80, 75, 90, 85, 70};

    cout << "Nilai pada indeks 0: " << nilai[0] << endl;
    cout << "Nilai pada indeks 4: " << nilai[4] << endl;

    nilai[1] = 95;
    cout << "Nilai baru pada indeks 1: " << nilai[1] << endl;

    return 0;
}