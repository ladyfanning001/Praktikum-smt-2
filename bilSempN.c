/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 7-03-2024
Nama file : cbilSempN.c
Deskripsi : menentukan bilangan sempurna sembarang N
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int n;
    int hasil;

    // Algoritma
    
    printf("Masukkan bialngan = ");
    scanf("%d", &n);
   
    if (n > 0)
    {
        printf("Bilangan Sempurnanya adalah ");
        for (int i = 1; i <= n; i++)
        {
            hasil = 0;
            for (int j = 1; j < i; j++)
            {
                if (i % j == 0)
                {
                    hasil = hasil + j;
                }
            }
            if (hasil == i)
            {
                printf("%d ", i);
            }
        }
    }
    else
        printf("Masukan tidak boleh negatif");
    return 0;
}