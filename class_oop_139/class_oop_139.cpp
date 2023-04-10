// class_oop_139.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Mahasiswa {
public:
    string nim;
    string nama;
public: void cetak() {
    cout << "NIM = " << nim;
    cout << "\nNama = " << nama;
}
};

class Matakuliah {
private:
    string kode;
    string namaM;
    int sks;
public:
    void input() {
        cout << "\nMasukan Kode Matakuliah : ";
        cin >> kode;
        cout << "Masukan Nama Matakuliah : ";
        cin >> namaM;
        cout << "Jumlah SKS : ";
        cin >> sks;
    }
    void tampil() {
        cout << "Kode Matakuliah : ";
        cout << "Nama Matakuliah : ";
        cout << "SKS : ";
    }
};

int main()
{
    Mahasiswa mhs1;
    Matakuliah mk;

    cout << "Masukan NIM : ";
    cin >> mhs1.nim;
    cout << "Masukan nama : ";
    cin >> mhs1.nama;
    mhs1.cetak();

    mk.input();
    mk.tampil();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
