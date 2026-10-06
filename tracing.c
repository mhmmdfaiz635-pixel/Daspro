/*
 Nama        : Muhammad Faiz Qodri Muslim
 NIM         : 2610511179
 Kelas       : E
 Modul       : 6
 Deskripsi   : Latihan tracing perulangan bersarang untuk menelusuri
               nilai accumulator per baris dan total keseluruhan.
*/

#include <stdio.h>

int main(void)
{
    int baris;
    int kolom;
    int total_baris;
    int total_keseluruhan = 0;

    for (baris = 1; baris <= 3; baris++)
    {
        total_baris = 0;

        for (kolom = 1; kolom <= 3; kolom++)
        {
            total_baris += baris * kolom;
        }

        total_keseluruhan += total_baris;

        printf("Total baris %d: %d\n",
               baris,
               total_baris);
    }

    printf("Total keseluruhan: %d\n",
           total_keseluruhan);

    return 0;
}