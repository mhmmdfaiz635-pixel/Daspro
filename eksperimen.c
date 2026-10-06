/*
 Nama        : Muhammad Faiz Qodri Muslim
 NIM         : 2610511179
 Kelas       : E
 Modul       : 6
 Deskripsi   : Program dasar untuk 10 eksperimen perubahan nested loop.
*/

#include <stdio.h>

int main(void)
{
    int baris;
    int kolom;

    for (baris = 1; baris <= 3; baris++)
    {
        for (kolom = 1; kolom <= 4; kolom++)
        {
            printf("%d ", baris * kolom);
        }

        printf("\n");
    }

    return 0;
}