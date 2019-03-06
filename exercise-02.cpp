/*
Author      : Aithra Junia Bouty
NPM         : 140810180054
Deskripsi   : Membuat struct theater
Tahun       : 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Theater{
    int room;
    char seat[3];
    char movieTitle[30];
};

int main()
{
    Theater bioskop;
    cout << "Room       : "; cin >> bioskop.room;
    cout << "Seat       : "; cin >> bioskop.seat;
    cout << "Movie Title: ";
    cin.ignore();
    cin.getline (bioskop.movieTitle,30);
    cout << endl;

    cout << bioskop.movieTitle << endl;
    cout << "room: " << bioskop.room << ", seat: " << bioskop.seat;
}
