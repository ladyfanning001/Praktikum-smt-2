/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 6-05-2024
Nama file : sequentialsearch2.c
Deskripsi : menampilkan banyak pengulangan yang terjadi saat mencari angka tertentu
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, x, IX;
    
    printf("Masukkan jumlah isi tabel: ");
    scanf("%d", &N);

    int T[N];  

    printf("Masukkan isi tabel:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    printf("Masukkan elemen yang dicari: ");
    scanf("%d", &x);

    char found = 0;

    i = 0; 
    while (i < N && !found) {
        if (T[i] == x) {
            found = 1; // Menetapkan found menjadi 1 (true) jika x ditemukan
            IX = i + 1; // Menyimpan indeks (berbasis-1) tempat x ditemukan
        } else {
            i = i + 1; 
        }
    }

    // Mengecek jika x tidak ditemukan
    if (!found) {
        IX = 0; // Jika x tidak ditemukan, tetapkan IX menjadi 0
    }

    // hasil
    if (found) {
        printf("True - IX=%d\n", IX);
    } else {
        printf("False - IX=0\n");
    }
    
    return 0;
}
