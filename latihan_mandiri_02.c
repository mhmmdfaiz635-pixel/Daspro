/*
 Nama        :
 NIM         :
 Kelas       :
 Modul       : 6
 Deskripsi   : Level 2 - menampilkan pola segitiga bilangan. Angka yang
               ditampilkan adalah counter baris, bukan counter kolom.
*/

#include <stdio.h>

int main(void)
{
    int tinggi;
    int baris;
    int kolom;
    int jumlah_angka = 0;

    do
    {
        printf("Masukkan tinggi pola 1-20: ");
        scanf("%d", &tinggi);

        if ((tinggi < 1) || (tinggi > 20))
        {
            printf("Tinggi harus berada pada rentang 1-20.\n");
        }
    }
    while ((tinggi < 1) || (tinggi > 20));

    printf("\nPOLA SEGITIGA BILANGAN\n");

    for (baris = 1; baris <= tinggi; baris++)
    {
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("%d ", baris);
            jumlah_angka++;
        }

        printf("\n");
    }

    printf("\nJumlah seluruh angka untuk tinggi %d: %d\n",
           tinggi,
           jumlah_angka);

    return 0;
}