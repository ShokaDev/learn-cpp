// Simbol statement Input / Output

#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;

    cout << "Masukkan Nama Anda: "; // Meminta nama
    getline(cin,nama); // Menerima input nama

    cout << "Nama anda adalah " << nama << endl; // Menampilkan nama

    return 0;
}