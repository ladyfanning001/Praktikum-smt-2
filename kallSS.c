/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 29-02-2024
Nama file : kallSS
Deskripsi : membuat kalkulator super sederhana
*/

#include <stdio.h>

int main() 
{
    int iA, iB;
    char pilihan;

    /*algoritma*/
    printf("Masukkan nilai iA :");
    scanf("%d",&iA);
    printf("Masukkan nilai iB :");
    scanf("%d",&iB);
    printf("Sebutkan nama operasi :");
    scanf(" %c",&pilihan);
    switch(pilihan){
    case 'a':
        printf("%d", iA + iB);
        break;
    case 'b' :
        printf("%d",iA - iB);
        break;
    case 'c' :
        printf("%d",iA * iB);
        break;
    case 'd' :
        printf("%f", iA/(float)iB);
        break;
    case 'e' :
        printf("%d",iA /iB);
        break;
    case 'f' :
        printf("%d",iA % iB);
        break;
    default :
        printf("Bukan pilihan menu yang benar");
        break;
    }
    return 0;
}