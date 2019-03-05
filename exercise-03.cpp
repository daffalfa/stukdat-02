/*
Muhammad Daffa Aflarizqi
140810180039
pegawai
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Pegawai{
 char NIP[100];
 char nama[100];
 int gol;
 int gaji;
};

typedef Pegawai PPegawai[20];

void banyakData(int &n){
 cout<<"Masukkan jumlah pegawai : ";
 cin>>n;
}
void inputPegawai(Pegawai PPegawai[],int &n){
 for (int i=0;i<n;i++){
        cout << "Masukkan data pegawai " << i+1 << endl;
        cout << "NIP        : "; cin >> PPegawai[i].NIP;
        cout << "Nama       : "; cin >> PPegawai[i].nama;
        cout << "Golongan   : "; cin >> PPegawai[i].gol;
        cout << endl;
    }
}

void sortingGol(Pegawai PPegawai[], int &n){
 int i;
 Pegawai temp;
 for(i=1; i<n; i++){
        temp = PPegawai[i];
        while(i>0 && PPegawai[i-1].gol>temp.gol){
            PPegawai[i]= PPegawai[i-1];
            i = i-1;
        }
        PPegawai[i]= temp;
    }
}

void sortingNIP(Pegawai PPegawai[], int &n){
 int i;
 Pegawai temp;
 for(i=1; i<n; i++){
        temp = PPegawai[i];
        while(i>0 && PPegawai[i-1].NIP>temp.NIP){
            PPegawai[i] = PPegawai[i-1];
            i = i-1;
        }
        PPegawai[i]= temp;
    }

}

void cariGaji(Pegawai PPegawai[], int &n){
 for (int i=0; i<n; i++){
  if (PPegawai[i].gol == 1){
   PPegawai[i].gaji=2000000;
  }
  else if (PPegawai[i].gol== 2){
   PPegawai[i].gaji=3000000;
  }
  else if (PPegawai[i].gol== 3){
   PPegawai[i].gaji=5000000;
  }
  else if (PPegawai [i].gol== 4){
   PPegawai[i].gaji=8000000;
  }
 }
}

int rataRata (Pegawai PPegawai [], int &n, int& rataGaji){
 int gajiTotal=0;
 for (int i=0 ; i<n ; i++){
  gajiTotal= gajiTotal+PPegawai[i].gaji;
 }
 rataGaji=gajiTotal/n;
 return(rataGaji);
}

void outputPegawai (Pegawai PPegawai[], int n, int rataGaji){
    sortingNIP(PPegawai,n);
    cariGaji(PPegawai,n);
    for (int i=0; i<n;i++){
   cout << "NIP    : " << PPegawai[i].NIP << endl;
   cout << "Nama   : " << PPegawai[i].nama << endl;
   cout << "Gaji   : " << PPegawai[i].gaji << endl;
   cout << endl;
  }
    rataRata(PPegawai, n, rataGaji);
    cout << "Rata-rata Gaji Pegawai : " << rataGaji << endl;
    sortingGol(PPegawai, n);
}
void gajiTerendah(Pegawai PPegawai[], int n){
    cout<<"Pegawai dengan gaji tertinggi : "<<PPegawai[n-1].nama<<endl;
}
void gajiTertinggi(Pegawai PPegawai[], int n){
    cout<<"Pegawai dengan gaji terendah : "<<PPegawai[0].nama<<endl;
}

int main(){
 int n, rataGaji;
 banyakData(n);
 inputPegawai(PPegawai,n);
 system("cls");
 cout << "DAFTAR PEGAWAI\n";
    outputPegawai(PPegawai, n, rataGaji);
    gajiTerendah(PPegawai,n);
    gajiTertinggi(PPegawai,n);
}
