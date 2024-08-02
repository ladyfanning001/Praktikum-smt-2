/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 15-05-2024
Nama file : booleansequential2.c
Deskripsi : menampilkan banyak pengulangan yang terjadi saat mencari angka tertentu dengan binary search
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void BinSearch2(int T[], int N, int X)
{
    int Atas, Bawah, Tengah, IX;
    Atas = 1;
    Bawah = N;
    Tengah = (Atas+Bawah)/2;
    while (Atas < Bawah && X!=T[Tengah-1])
    {
        
        if(X < T[Tengah-1])
        {
            Bawah = Tengah -1;
        }
        else if (X > T[Tengah-1])
        {
            Atas = Tengah + 1;
        }
        Tengah = (Atas+Bawah)/2;
    }
    if(X == T[Tengah-1])
    {
        printf("true");   
        IX = Tengah;   
    }
    else
    {
        printf("false");   
        IX = 0;
    }
    printf("\n%d", IX); 
}

int main()
{
    int N, X;

    int T2[] = {1,4,6,7,10,12,18,21,29,30,41,44,47};
    N= 13;
    /*3*/
    printf("\n3.");
    /*a*/
    printf("\na) \n");
    X = 41;
    BinSearch2(T2,N,X);
    /*b*/
    printf("\nb) \n");
    X = 8;
    BinSearch2(T2,N,X);

}