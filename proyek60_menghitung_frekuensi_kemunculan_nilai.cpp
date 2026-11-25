#include <iostream>
using namespace std;

int main() {
    int data[7] = {5, 2, 5, 8, 5, 2, 9};
    int target;
    int hitung = 0;

    cin >> target;

    for (int i = 0; i < 7; i++) {
        if (data[i] == target) {
            hitung++;
        }
    }

    cout << "Kemunculan: " << hitung << endl;

    return 0;
}