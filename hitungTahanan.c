/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 29-02-2024
Nama file : hitungTahanan
Deskripsi : menentukan nilai bilangan bulatb negatif dan positif
*/

#include <stdio.h>

int main()
{
    //kamus
    float satu;
    float dua;
    float tiga;
    float sum;

    //algoritma
    printf("tahanan peratama \n");
    scanf("%f", &satu);
    printf("tahanan kedua \n");
    scanf("%f", &dua);
    printf("tahanan ketiga \n");
    scanf("%f", &tiga);
    
    if(satu<0){
        printf("masukkan tidak boleh negatif");
    }
    else {
        if(dua<0){
        printf("masukkan tidak boleh negatif");
        }
        else if(tiga<0){
        printf("masukkan tidak boleh negatif");
        }
        else {
        sum = satu+dua+tiga ;
        printf("total tahana adalah %.2f/n",sum);
        }
    }
    return 0;
}