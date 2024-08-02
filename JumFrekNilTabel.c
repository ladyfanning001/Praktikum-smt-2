/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 7-03-2024
Nama file : JumFrekNiltabel.c
Deskripsi : menampilkan jumalh dari elemen 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int size;
    int total = 0;

    // Algoritma

    printf("Masukkan size dari Tabel : ");
    scanf("%d", &size);
    int T[size];

    // Input value
    for (int i = 0; i < size; i++)
    {
        printf("Masukkan value Element Tabel  ke-%d : ", i);
        scanf("%d", &T[i]);
        if (T[i] <= 0)
        {
            printf("Input value Element Tabel harus lebih dari Nol");
            return 0;
        }
    }

    // mengecek nilai yang muncul lebih dari sekali
    for (int i = 0; i < size; i++)
    {
        int freak = 0;
        for (int j = 0; j < size; j++)
        {
            if (T[i] == T[j])
            {
                freak = freak + 1;
            }
        }
        if (freak > 1)
        {
            total = total + T[i];
            printf("%d + ", T[i]);
        }
    }
    printf("} = %d", total);

    return 0;
}


