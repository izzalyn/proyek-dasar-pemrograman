#include <iostream>
using namespace std;

int main() {
    int angka[5] = {10, 20, 30, 40, 50};
    int total = 0;
    for (int i = 0; i < 5; i++) {
    total = total + angka[i];
}
cout << "Total = " << total << endl;
    return 0;
}