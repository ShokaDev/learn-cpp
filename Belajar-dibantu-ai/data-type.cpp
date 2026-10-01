#include <iostream>
#include <string>

using namespace std;

int main() {

    // Integer
    int umur = 18;

    // Float
    float tinggi = 165.5f;

    // Double
    double berat = 55.7;

    // Character
    char jenisKelamin = 'L';

    // Boolean
    bool mahasiswa = true;

    // String
    string nama = "Farel";


    // Menampilkan data

    cout << "===== DATA TYPE =====" << endl;

    cout << "Nama          : " << nama << endl;
    cout << "Umur          : " << umur << endl;
    cout << "Tinggi        : " << tinggi << " cm" << endl;
    cout << "Berat         : " << berat << " kg" << endl;
    cout << "Jenis Kelamin : " << jenisKelamin << endl;
    cout << "Mahasiswa     : " << mahasiswa << endl;


    return 0;
}