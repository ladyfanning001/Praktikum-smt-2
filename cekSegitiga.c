/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 29-02-2024
Nama file : cekSegitiga
Deskripsi : menentukan jenis segitiga
*/

#include <stdio.h>

int main()
{
    //kamus
    int i1;
    int i2;
    int i3;

    //algoritma
    printf("masukkan sisi pertama \n");
    scanf("%d", &i1);
    printf("masukkan sisi kedua \n");
    scanf("%d", &i2);
    printf("masukkan sisi ketiga \n");
    scanf("%d", &i3);

    if(i1<=0 || i2<=0 || i3<=0){
        printf("masukkan tidak boleh negatif");
    }
    else
    {
        if((i1==i2) && (i2==i3)){
        printf("segitiga sama sisi");
        }
        else if ((i1==i2) || (i2==i3) || (i1==i3)){
        printf("segitiga sama kaki");
        }
        else{
        printf("segitiga sembarang");
        }
    }
    return 0;
}