/*
 Nama        :
 NIM         :
 Kelas       :
 Modul       : 6
 Deskripsi   : Level 1 - menampilkan persegi panjang karakter berdasarkan
               input jumlah baris dan jumlah kolom.
*/

#include <stdio.h>

int main(void)
{
    int jumlah_baris;
    int jumlah_kolom;
    int baris;
    int kolom;
    char karakter;

    do
    {
        printf("Masukkan jumlah baris : ");
        scanf("%d", &jumlah_baris);

        if ((jumlah_baris < 1) || (jumlah_baris > 20))
        {
            printf("Jumlah baris harus berada pada rentang 1-20.\n");
        }
    }
    while ((jumlah_baris < 1) || (jumlah_baris > 20));

    do
    {
        printf("Masukkan jumlah kolom : ");
        scanf("%d", &jumlah_kolom);

        if ((jumlah_kolom < 1) || (jumlah_kolom > 20))
        {
            printf("Jumlah kolom harus berada pada rentang 1-20.\n");
        }
    }
    while ((jumlah_kolom < 1) || (jumlah_kolom > 20));

    printf("Masukkan karakter     : ");
    scanf(" %c", &karakter);

    printf("\n");

    for (baris = 1; baris <= jumlah_baris; baris++)
    {
        for (kolom = 1; kolom <= jumlah_kolom; kolom++)
        {
            printf("%c ", karakter);
        }

        printf("\n");
    }

    return 0;
}