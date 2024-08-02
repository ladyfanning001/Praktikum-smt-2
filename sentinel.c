/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 15-05-2024
Nama file : sentinel.c
Deskripsi : menampilkan banyak pengulangan yang terjadi saat mencari angka tertentu dengan sentinel
*/

#include <stdio.h>

// Prosedur Sequential Search dengan Sentinel
void SEQSearchWithSentinel(int TabInt[], int N, int X, int *IX) {
    int i;

    // Pasang sentinel
    TabInt[N] = X;

    // Inisialisasi indeks
    i = 0;

    // Pencarian sekuensial
    while (TabInt[i] != X) {
        i++;
    }

    // Menentukan hasil pencarian
    if (i < N) {
        *IX = i + 1;  // Ketemu pada elemen tabel
    } else {
        *IX = 0;  // Tidak ketemu (sentinel)
    }
}


