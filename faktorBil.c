/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 7-03-2024
Nama file : faktorBil.c
Deskripsi : menentukan faktor bilangan
*/

#include <stdio.h>

int main ()
{
    int i, N;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d ", i);
        }
    }
    
}
