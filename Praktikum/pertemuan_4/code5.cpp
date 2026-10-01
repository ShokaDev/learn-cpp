// Mencari nilai terkecil

#include <iostream>

using namespace std;

int main (){
    int bil1 = 42; // Menyimpan bilangan 1
    int bil2 = 30; // Menyimpan bilangan 2

    int terkecil = (bil1 < bil2) ? bil1 : bil2; // Memilih bilangan terkecil

    cout << "bilangan terkecil = " << terkecil << endl; // Menampilkan Hasil

    return 0;
}