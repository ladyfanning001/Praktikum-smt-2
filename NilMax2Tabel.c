/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 7-03-2024
Nama file : NilMax2Tabel.c
Deskripsi : menentukan nilai maksimal kedua
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int N;
    int i;
    int max1;
    int max2;

    //Algoritma
    printf("Masukkan jumlah elemen tabel: ");
    scanf("%d", &N);
    printf("Masukkan elemen tabel:\n");
    int T[N];
    for (i = 0; i < N; i++) {
     scanf("%d", &T[i]);
    }
    max1 = 0; //0=5; 1=5; 2=5; 3=5; 4=7
    max2 = 0; //0=0; 1=1; 2=2; 3=3; 4=5
    for (i = 0; i < N; i++) {
        if (T[i] > max1) {
            max2 = max1;
            max1 = T[i];
        }
        else{
            if (T[i] > max2 && T[i] != max1) {
                max2 = T[i];
            }
        }
    }
    printf("Nilai maksimum kedua dari tabel adalah: %d\n", max2);
    return 0;
}