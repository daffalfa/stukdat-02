/*
 * Author : Muhammad Daffa Alfarizqi
 * NPM : 140810110039
 * Deskripsi :
 * Tahun : 2019
 */
#include <iostream>
#include <string.h>
using namespace std;
struct Theatre
{
    int room;
    char seat[3];
    char movietitle[30];
};
int main() {
     Theatre bioskop;
     bioskop.room = 10;
     strcpy(bioskop.seat, "39");
     strcpy(bioskop.movietitle, "Adit & Jarwo");

     cout << "theatre ke"<<bioskop.room << endl;
     cout << "tempat duduk"<<bioskop.seat << endl;
     cout << "judul film"<<bioskop.movietitle << end
}

