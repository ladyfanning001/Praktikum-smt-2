/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 7-03-2024
Nama file : cekBilSemp.c
Deskripsi : menentukan bilangan sempurna
*/

#include <stdio.h>

int main() 
{
    int i, N,total=0;
    printf("Enter the value of N: ");
    scanf("%d", &N);


    for (i = 1; i < N; i++) {
        if (N % i == 0) {
            total = total + i;
        }    
    }
    if(total == N) {
    printf("bilagan sempurna" );
    }
    else{
    printf("bukan bilangan sempurna");
    }

}