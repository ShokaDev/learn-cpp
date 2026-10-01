// Menghitung luas segitiga tapi kali ini pake cin out si it

#include <iostream>

using namespace std;

int main (){
    double alas; // Menyimpan alas
    double tinggi; // Menyimpan Tinggi
    double luas; // Menyimpan Luas

    cout << "Masukkan alas: "; // Meminta alas
    cin >> alas; // Menerima alas

    cout << "Masukkan tinggi: "; // Meminta Tinggi
    cin >> tinggi; // Menerima tinggi

    luas = 0.5 * alas * tinggi; // Menghitung luas segitiga

    cout << "Luas segitiga = " << luas << endl; // Menampilkan luas

    return 0;
}