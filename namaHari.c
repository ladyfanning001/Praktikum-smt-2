/*
nama : ladya kalascha
NIM : 24060123140133
Tanggal : 29-02-2024
Nama file : namaHari
Deskripsi : menentukan nama hari
*/

#include <stdio.h>

int main()
{

//kamus
int day;

//algotitma
printf("masukkan bilangan");
scanf("%d", &day);

switch (day)
{
    case 1 :
        printf("senin");/* constant-expression */
        break;
    case 2 :
        printf("selasa");
        break;
    case 3:
        printf("rabu");
        break;
    case 4 :
        printf("kamis");
        break;
    case 5 :
        printf("jumat");
        break;
    case 6 :
        printf("sabtu");
        break;
    case 7 :
        printf("minggu");
        break;
        default:
        printf("bilangan tidak valid");
        break;
}
        return 0;
}