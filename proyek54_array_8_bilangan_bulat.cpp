#include <iostream>
using namespace std;

int main() {
    int data[8] = {10, 20, 30, 40, 50, 60, 70, 80};

    for (int i = 0; i < 8; i++) {
        cout << "Indeks " << i << ": " << data[i] << endl;
    }

    return 0;
}