/*
 Nama        :
 NIM         :
 Kelas       :
 Modul       : 6
 Deskripsi   : Level 4 (Challenge) - menampilkan pola piramida.
               jumlah spasi  = tinggi - baris
               jumlah simbol = 2 * baris - 1
*/

#include <stdio.h>

int main(void)
{
    int tinggi;
    int baris;
    int spasi;
    int simbol;

    do
    {
        printf("Masukkan tinggi piramida 1-20: ");
        scanf("%d", &tinggi);

        if ((tinggi < 1) || (tinggi > 20))
        {
            printf("Tinggi harus berada pada rentang 1-20.\n");
        }
    }
    while ((tinggi < 1) || (tinggi > 20));

    printf("\nPOLA PIRAMIDA\n\n");

    for (baris = 1; baris <= tinggi; baris++)
    {
        for (spasi = 1; spasi <= (tinggi - baris); spasi++)
        {
            printf(" ");
        }

        for (simbol = 1; simbol <= (2 * baris - 1); simbol++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}