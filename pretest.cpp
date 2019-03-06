/*
Author      : Aithra Junia Bouty
NPM         : 140810180054
Deskripsi   :
Tahun       : 2019
*/

#include <iostream>
using namespace std;

void input(int (&arr)[100], int&n){
    cout << "Jumlah angka= "; cin >> n;
    for(int i=0;i<n;i++){
        cout << "Angka " << i+1 << ": "; cin >> arr[i];
    }
}

void moveZeroToFront(int (&arr)[100], int n){
    int angka;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            arr[angka++]=arr[i];
        }
    }
    while (angka<n){
        arr[angka++]=0;
    }
}

void output(int arr[], int n){
    cout << "Angka 0 dipindahkan ke depan: \n";
    for (int i=0;i<n;i++){
        cout << arr[i] << ",";
    }
}

int main()
{
    int arr[100];
    int n;
    input(arr,n);
    moveZeroToFront(arr,n);
    output(arr,n);
}
