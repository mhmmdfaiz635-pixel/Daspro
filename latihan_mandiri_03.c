/*
 Nama        :
 NIM         :
 Kelas       :
 Modul       : 6
 Deskripsi   : Level 3 - menampilkan tabel penjumlahan dari 1 sampai batas.
*/

#include <stdio.h>

int main(void)
{
    int batas;
    int baris;
    int kolom;

    do
    {
        printf("Masukkan batas tabel 1-15: ");
        scanf("%d", &batas);

        if ((batas < 1) || (batas > 15))
        {
            printf("Batas harus berada pada rentang 1-15.\n");
        }
    }
    while ((batas < 1) || (batas > 15));

    printf("\nTABEL PENJUMLAHAN\n\n");

    printf("%5s", "+");

    for (kolom = 1; kolom <= batas; kolom++)
    {
        printf("%5d", kolom);
    }

    printf("\n");

    for (baris = 1; baris <= batas; baris++)
    {
        printf("%5d", baris);

        for (kolom = 1; kolom <= batas; kolom++)
        {
            printf("%5d", baris + kolom);
        }

        printf("\n");
    }

    return 0;
}