#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "~ Tugas Pertemuan ke-13 Pencarian Sekunsial Mencari Data Nama ~" << endl;
	cout << "======================================================================" << endl;
	cout << "Nama          : Sella Andira Bintang Wulandari" << endl;
  	cout << "NIM           : 5520122013" << endl;
   	cout << "Program Studi : Informatika" << endl;
   	cout << "======================================================================" << endl;
   	
    string friends[5] = {"Qibti", "Eko", "Efi", "Sella", "Zaki"};
    string yourName;
    bool found = false;

    cout << "Masukkan nama Anda: ";
    cin >> yourName;

    // Pencarian sekuenisal
    for (int i = 0; i < 5; i++) {
        if (friends[i] == yourName) {
            found = true;
            cout << "Nama Anda ditemukan pada indeks ke-" << i << endl;
            break;
        }
    }

    if (!found) {
        cout << "Maaf, nama Anda tidak ditemukan dalam daftar." << endl;
    }

    return 0;
}
