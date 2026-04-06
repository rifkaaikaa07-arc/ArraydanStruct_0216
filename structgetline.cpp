#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat
{
    string desa;
    string kota;;
};

struct Orang
{
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main() {
    Orang mhs;
    // mengisi data
    cout << "Mengisi Data" << endl;
    cout << "Nama : ";
    getline(cin ,  mhs.nama);
    cout << "Alamat : ";
    getline(cin , mhs.alamat.desa);
    cout << "Alamat : ";
    getline(cin , mhs.alamat.kota);
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;
}