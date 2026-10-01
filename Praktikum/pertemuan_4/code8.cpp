// Menghitung luas lingkaran dengan cin cout

#include <iostream>

using namespace std;

int main() {
    double phi = 3.14;
    double r;
    double luas;

    cout << "Masukkan jari jari: ";
    cin >> r;

    luas = phi * r * r;

    cout << "Luas lingkaran = "<< luas << endl;

    return 0;
}