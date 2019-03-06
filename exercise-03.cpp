/*
Author      : Aithra Junia Bouty
NPM         : 140810180054
Deskripsi   : Membuat stuct pegawai dengan rata2 gaji, gaji tertinggi, gaji terendah
Tahun       : 2019
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Pegawai{
    char nama[30];
    char nip[20];
    int gol;
    int gaji;
};

typedef Pegawai LarikPgw[10];
void inputPegawai(LarikPgw& pgw, int& n);
void cariGaji(LarikPgw pgw, int n);
void rataGaji(LarikPgw& pgw, int n, int& rata);
void sortingGol(LarikPgw pgw, int n);
void gajiTerendah(LarikPgw pgw, int n);
void gajiTertinggi(LarikPgw pgw, int n);
void cetakDaftar(LarikPgw pgw, int n);

int main()
{
    int n, rata;
    LarikPgw pgw;
    int pilih;
    char jawab;

    inputPegawai(pgw,n);
    menu:
    cout << "Menu: ";
    cout << "\n1. Daftar pegawai";
    cout << "\n2. Rata-rata gaji pegawai";
    cout << "\n3. Gaji Terendah";
    cout << "\n4. Gaji Tertinggi";
    cout << "\npilih menu: "; cin >> pilih; cout << endl;

    if(pilih==1){
        cetakDaftar(pgw,n);
    }
    else if(pilih==2){
        rataGaji(pgw,n,rata);
    }
    else if(pilih==3){
        gajiTerendah(pgw,n);
    }
    else if(pilih==4){
        gajiTertinggi(pgw,n);
    }

    cout << "\nPilih menu lainnya?[Y/T]"; cin >> jawab;
    if(jawab=='y' || jawab=='Y'){
        cout << endl;
        goto menu;
    }
}

void inputPegawai(LarikPgw& pgw, int& n){
    cout << "jumlah pegawai: "; cin >> n;
    cout << "\nMasukkan data pegawai\n";
    for(int i=0;i<n;i++){
        cout << "NIP Pegawai: "; cin >> pgw[i].nip;
        cout << "Nama Pegawai: "; cin >> pgw[i].nama;
        cout << "Gol Pegawai: "; cin >> pgw[i].gol;
        cout << endl;
    }
}

void cariGaji(LarikPgw pgw, int n){
    for(int i=0;i<n;i++){
        if(pgw[i].gol==1){
            pgw[i].gaji = 2000000;
        }
        else if(pgw[i].gol==2){
            pgw[i].gaji = 3000000;
        }
        else if(pgw[i].gol==3){
            pgw[i].gaji = 5000000;
        }
        else if(pgw[i].gol==4){
            pgw[i].gaji = 8000000;
        }
    }
}

void rataGaji(LarikPgw& pgw, int n, int& rata){
    int rataSmntr =0;
    for(int i=0;i<n;i++){
        rataSmntr+=pgw[i].gaji;
    }
    rata = rataSmntr/n;
    cout << "Rata-rata gaji= " << rata << endl;
}

void sortingGol(LarikPgw pgw, int n){
	Pegawai temp;
	for(int i=1; i<n; i++){
        temp = pgw[i];
        while(i>0 && pgw[i-1].gol>temp.gol){
            pgw[i]= pgw[i-1];
            i = i-1;
        }
        pgw[i]= temp;
    }
}

void gajiTerendah(LarikPgw pgw, int n){
    sortingGol(pgw, n);
    cout<<"Pegawai dengan gaji tertinggi : "<<pgw[n-1].nama<<endl;
}

void gajiTertinggi(LarikPgw pgw, int n){
    sortingGol(pgw,n);
    cout<<"Pegawai dengan gaji terendah : "<<pgw[0].nama<<endl;
}

void cetakDaftar(LarikPgw pgw, int n){
    cariGaji(pgw,n);
    for(int i=0;i<n;i++){
        cout << "Nip    : " << pgw[i].nip << endl;
        cout << "Nama   : " << pgw[i].nama << endl;
        cout << "Gol    : " << pgw[i].gol << endl;
        cout << "Gaji   : " << pgw[i].gaji << endl;
        cout << endl;
    }
}
