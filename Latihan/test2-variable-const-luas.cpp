#include <iostream>
using namespace std;

int main (){
    // Deklarasikan Variabel ini
    string nama = "Farel";
    int umur = 18;
    double tinggiBadan = 170;

    const double phi = 3.14;
    int jariJari =  7;

    // Rumus
    double luas = phi * jariJari * jariJari;

    cout << "Nama = " << nama << endl;
    cout << "Umur = " << umur << endl;
    cout << "Tinggi = " << tinggiBadan << " Cm" << endl;
    cout << "Luas Lingkaran = " << luas << endl;

return 0;
}