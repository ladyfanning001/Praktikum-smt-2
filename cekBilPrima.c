/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 7-03-2024
Nama file : cekBilPrima.c
Deskripsi : menentukan bilangan prima
*/

#include <stdio.h>

int main() 
{
    int i, N,total=0;
    printf("Enter the value of N: ");
    scanf("%d", &N);


    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            total = total + 1;
        }    
    }
    if(total == 2) {
    printf("bilagan prima" );
    }
    else{
    printf("bilangan bukan prima");
    }

}