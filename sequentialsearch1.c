
/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 6-05-2024
Nama file : sequentialsearch1.c
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

    // Sequential Search
    IX = 0;  
    for (i = 0; i < N; i++) {
        if (T[i] == x) {
            IX = i + 1;  
            break;
        }
    }

    // Output 
    if (IX > 0) {
        printf("%d\n", IX);  
    } else {
        printf("0\n"); 
    }

    return 0;
}
