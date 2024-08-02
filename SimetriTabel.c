
/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 7-03-2024
Nama file : Simetritabel.c
Deskripsi : menentukan dua tabel simetri atau tidak
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{

    //kamus
    int size1;
    int size2;

    //algoritma

    printf("Masukkan ukuran dari Tabel T1 : ");
    scanf("%d", &size1);
    int T1[size1];

    for (int i = 0; i < size1; i++)
    {
        printf("Masukkan value Element Tabel T1 ke-%d : ", i);
        scanf("%d", &T1[i]);
        if (T1[i] <= 0)
        {
            printf("Input Value tidak boleh Nol");
            return 0;
        }
    }

    // Input Tabel T2
    printf("Masukkan ukuran dari Tabel T2 : ");
    scanf("%d", &size2);
    int T2[size2];

    // Input vilai
    for (int i = 0; i < size2; i++)
    {
        printf("Masukkan value Element Tabel T2 ke-%d : ", i);
        scanf("%d", &T2[i]);
        if (T2[i] <= 0)
        {
            printf("Input Value tidak boleh Nol");
            return 0;
        }
    }

    // mengecek apakah tabel simetri atau tidak
    if (size1 == size2)
    {
        for (int i = 0; i < size1; i++)
        {
            if (T1[i] != T2[i])
            {
                printf("T1 dan T2 tidak Simetris");
                break;
            }
            else if (T1[i] == T2[i])
            {
                if (i == size1 - 1)
                {
                    printf("T1 dan T2 Simetris ");
                }
            }
        }
    }
    else
    {
        printf("T1 dan T2 tidak Simetris");
    }

    return 0;
}
