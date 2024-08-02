/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 15-05-2024
Nama file : booleansequential1.c
Deskripsi : menampilkan banyak pengulangan yang terjadi saat mencari angka tertentu dengan binary boolean
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void BinSearch1(int T[], int N, int X)
{
    int Atas, Bawah, Tengah;
    Atas = 1;
    Bawah = N;
    bool Found = false;
    while (Atas <= Bawah && !Found)
    {
        Tengah = (Atas+Bawah)/2;
        if(X == T[Tengah-1])
        {
            Found = true;
            break;
        }
        else if (X < T[Tengah-1])
        {
            Bawah = Tengah-1;
        }
        else
        {
            Atas = Tengah+1;
        }
    }
    if(Found)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
int main()
{
    int N, X;
    /*2*/
    printf("\n2.");
    int T2[] = {1,4,6,7,10,12,18,21,29,30,41,44,47};
    N= 13;
    /*a*/
    printf("\na) \n");
    X = 41;
    BinSearch1(T2,N,X);
    /*b*/
    printf("\nb) \n");
    X = 8;
    BinSearch1(T2,N,X);
}