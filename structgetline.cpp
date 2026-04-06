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
    // tampilkan
    cout << "Menampilkan Data" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "Kota : " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
}