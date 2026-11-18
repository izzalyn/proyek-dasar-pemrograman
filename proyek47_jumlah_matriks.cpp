#include <iostream>

using namespace std;

int main() {
    int matriks[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int total = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriks[i][j] << " ";
            total += matriks[i][j];
        }
        cout << endl;
    }
    
    cout << "Jumlah total elemen: " << total << endl;
    return 0;
}