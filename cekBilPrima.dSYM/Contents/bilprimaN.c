/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 7-03-2024
Nama file : cbilPrimaN.c
Deskripsi : menentukan bilangan prima sembarang N
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int n;
    int hasil;

    // Algortima
    printf("Masukkan bilangan = ");
    scanf("%d", &N);
   

    if (N > 0)
    {
        printf("Bilangan Primanya adalah ");
        for (int i = 2; i <= n; i++)
        {
            hasil = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    total = total + 1;
                }
            }
            if (hasil == 2)
            {
                printf("%d ", i);
            }
        }
    }
    else
        printf("Masukan tidak boleh negatif");

    return 0;
}