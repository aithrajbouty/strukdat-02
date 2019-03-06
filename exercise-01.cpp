/*
Author      : Aithra Junia Bouty
NPM         : 140810180054
Deskripsi   :
Tahun       : 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Orang{
    int umur;
    char nama[30];
    char jk;
    char goldar[2];
};

int main()
{
    Orang orang;
    orang.umur=10;
    strcpy(orang.nama, "fahmi");
    orang.jk='L';
    strcpy(orang.goldar, "O");

    cout << orang.umur << endl;
    cout << orang.nama << endl;
    cout << orang.jk << endl;
    cout << orang.goldar << endl;
}
