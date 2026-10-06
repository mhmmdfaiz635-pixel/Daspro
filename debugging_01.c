/*
 Nama        : Muhammad Faiz Qodri Muslim
 NIM         : 2610511179
 Kelas       : E
 Modul       : 6
 Deskripsi   : Debugging Challenge 1 - program pola segitiga yang semula
               salah. Goal: menampilkan pola segitiga naik 5 baris.
*/

#include <stdio.h>

int main(void)
{
    int baris;
    int kolom;

    for (baris = 1; baris <= 5; baris++)
    {
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}