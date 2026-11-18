#include <iostream>

using namespace std;

int main() {
    int inventaris[3][4] = {
        {10, 15, 5, 8},
        {12, 10, 6, 9},
        {8, 12, 7, 10}
    };
    
    int totalSemua = 0;

    for (int i = 0; i < 3; i++) {
        int totalRuangan = 0;
        for (int j = 0; j < 4; j++) {
            totalRuangan += inventaris[i][j];
        }
        cout << "Jumlah perangkat Ruangan " << i + 1 << ": " << totalRuangan << endl;
        totalSemua += totalRuangan;
    }

    cout << "Total seluruh perangkat di lab: " << totalSemua << endl;

    return 0;
}