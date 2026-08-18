#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //deklarasi variabel baris dan NamaFile
    string bairs, NamaFile;

    //membuat input untuk menangkap nama file
    cout << "Masukkan Nama File : ";
    cin >> NamaFile;

    //membuat file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file dengan ekstensi txt
    outfile.open("D:\\PemdasAntara\\coba\\" + NamaFile + ".txt", ios::out);

    cout << ">= Menulis File, \'q\' untuk keluar" << endl;
}