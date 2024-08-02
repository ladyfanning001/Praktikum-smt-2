/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 7-03-2024
Nama file : JumBarKolMat.c
Deskripsi : menampilkan jumalh dari elemen baris dan kolom
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int size1;
    int size2;

    // Algoritma
    // Input size Array
    printf("Masukkan size1 dari Tabel 2 dimensi \n");
    printf("Masukkan size1 dari Tabel dimensi pertama--baris : ");
    scanf("%d", &size1);
    printf("Masukkan size1 dari Tabel dimensi kedua--kolom  : ");
    scanf("%d", &size2);

    int T[size1][size2];

    // Input nilai Array 2 dimensi
    for (int i = 0; i < size1; i++)
    {
        printf("\nnilai untuk Element baris ke-%d \n", i + 1);
        for (int j = 0; j < size2; j++)
        {
            printf("Masukkan nilai Element baris ke-%d kolom ke-%d : ", i + 1, j + 1);
            scanf("%d", &T[i][j]);
            if (T[i] <= 0)
            {
                printf("Input nilai Element Tabel harus lebih dari Nol");
                return 0;
            }
        }
    }

    // Jumlah element tiap baris
    printf("\nJumlah element baris \n");
    for (int i = 0; i < size1; i++)
    {
        int totalBaris = 0;
        printf("Baris ke-%d : ", i + 1);
        for (int j = 0; j < size2; j++)
        {
            totalBaris = totalBaris + T[i][j];
        }
        printf("%d\n", totalBaris);
    }

    // Jumlah element tiap kolom
    printf("\nJumlah element Kolom \n");
    for (int i = 0; i < size2; i++)
    {
        int totalKolom = 0;
        printf("Kolom ke-%d : ", i + 1);
        for (int j = 0; j < size2; j++)
        {
            totalKolom = totalKolom + T[j][i];
        }
        printf("%d\n", totalKolom);
    }
    return 0;
}