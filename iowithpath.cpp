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

    //looping untuk menulis isi file
    while (true)
    {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //kondisi jika baris hanya berisi huruf q
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari baris ke dalam file
        outfile << baris << endl;
    }
    //menutup file apabila telah selesai di tulis
    outfile.close();

    //membuka file dalam mode membaca
    ifstream infile;

    //menunjuk ke sebuah file dengan ekstensi .txt
    infile.open(NamaFile + ".txt", ios::in);

    cout << endl << ">= Membuka dan Membaca File" << endl;
    //kondisi jika file ada
    if (infile.is_open())
    {
        //perulangan untuk menampilkan setiap baris
        while (getline(infile, baris))
        {
            cout << baris << endl;
        }
        //menutup file jika telah selesai di loop
        infile.close();
    }
    //kondisi jika file tidak ada
    else cout << "Unable to open File";
    return 0;
}