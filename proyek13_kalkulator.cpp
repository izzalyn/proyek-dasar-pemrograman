#include <iostream>
using namespace std;

int main() {
    float a, b;
    char op;
    
    
    cout << "Masukkan perhitungan : ";
    cin >> a >> op >> b;
    
    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/':
            if (b != 0) cout << a / b;
            else cout << "Tidak dapat membagi dengan nol";
            break;
        default: cout << "Operator tidak valid";
    }
    
    return 0;
}
