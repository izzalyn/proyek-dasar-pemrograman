#include <iostream>

using namespace std;

int main() {
    for (int baris = 1; baris <= 3; baris++) {
        for (int kolom = 1; kolom <= 4; kolom++) {
            cout << "(" << baris << "," << kolom << ") ";
        }
        cout << endl;
    }
    
    return 0;
}