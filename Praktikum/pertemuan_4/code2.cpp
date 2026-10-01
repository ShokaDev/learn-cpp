#include <iostream>
#include <string>

using namespace std;

int main() {
    int bil1 = 70; // Memasukkan bilangan pertama
    int bil2 = 49; // Menyimpan nilai kedua

    cout << "Penjumlahan = " << bil1 + bil2 << endl; // Penjumlahan
    cout << "Pengurangan = " << bil1 - bil2 << endl; //Pengurangan
    cout << "Perkalian = " << bil1 * bil2 << endl; // Perkalian
    cout << "Pembagian = " << bil1 / bil2 << endl; // Pembagian
    cout << "Modulus = " << bil1 % bil2 << endl; // Sisa pembagian
    // Modulus cuman berlaku di tipe data int dan long

    return 0;
}