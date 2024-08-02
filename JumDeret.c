/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 7-03-2024
Nama file : JumDeret.c
Deskripsi : menjumlahkan deret
*/

#include <stdio.h>

int main() 
{
    int i, N, sum;

    printf("Enter the value of N: ");
    scanf("%d", &N);
    sum = 0;
    
    for (i = 1; i <= N; i++) 
    {
        sum += i;
    }
    printf("\n jumlah deret adalah :");
    printf("%d\n", sum);
}