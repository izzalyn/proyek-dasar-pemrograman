#include <iostream>

using namespace std;

int main() {
    int nilai[4][3] = {
        {80, 85, 90},
        {75, 80, 85},
        {90, 95, 88},
        {70, 75, 80}
    };
    
    for (int m = 0; m < 4; m++) {
        int total = 0;
        for (int mk = 0; mk < 3; mk++) {
            total += nilai[m][mk];
        }
        double rata = static_cast<double>(total) / 3;
        cout << "Mahasiswa " << m + 1 << " - Rata-rata: " << rata << endl;
    }
    
    return 0;
}