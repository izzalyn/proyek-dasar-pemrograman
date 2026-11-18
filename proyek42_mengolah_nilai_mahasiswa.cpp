#include <iostream>

using namespace std;

int main() {
    const int M = 3;
    const int T = 4;

    int nilai[3][4] = {
        {80, 85, 90, 75},
        {70, 75, 80, 85},
        {90, 95, 85, 90}
    };

    for (int m = 0; m < M; m++) {
        int total = 0;
        for (int t = 0; t < T; t++) {
            total += nilai[m][t];
        }

        double rata = static_cast<double>(total) / T;
        cout << "Mahasiswa " << m + 1 << " - Rata-rata: " << rata << endl;
    }

    return 0;
}