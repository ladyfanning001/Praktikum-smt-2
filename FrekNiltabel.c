/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 7-03-2024
Nama file : FrekNiltabel.c
Deskripsi : menampilkan elemen yang frekuensinya lebih dari satu kali
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    //kamus
     int n, i, j;
    
    // Membaca ukuran tabel
    printf("Masukkan jumlah elemen tabel: ");
    scanf("%d", &n);
     int T[n], frekuensi[n];
     int sudahTampil[n];

    // Membaca elemen tabel T
    printf("Masukkan elemen tabel T: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    // Menghitung frekuensi setiap elemen
    for(i = 0; i < n; i++) {
        frekuensi[T[i]]++;
    }

    // Menampilkan elemen yang frekuensinya lebih dari satu
    printf("Elemen tabel T yang frekuensinya lebih dari satu: ");
    for(i = 0; i < n; i++) {
        if(frekuensi[T[i]] > 1 && sudahTampil[T[i]] == 0) {
            printf("%d ", T[i]);
            sudahTampil[T[i]] = 1;
        }
    }

    return 0;
}
