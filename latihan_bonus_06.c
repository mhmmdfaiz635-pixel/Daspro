/*
 Nama        : Muhammad Faiz Qodri Muslim
 NIM         : 2610511179
 Kelas       : E
 Modul       : 6
 Deskripsi   : Level 5 - menghitung banyaknya hasil kali genap dalam
               tabel perkalian n x m menggunakan nested loop.
               Keluaran diperiksa ketat, harus persis dengan contoh.
*/

#include <stdio.h>

int main(void)
{
    int n;
    int m;
    int baris;
    int kolom;
    int genap = 0;

    if (scanf("%d", &n) != 1)
    {
        return 0;
    }

    if (scanf("%d", &m) != 1)
    {
        return 0;
    }

    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = 1; kolom <= m; kolom++)
        {
            if (((baris * kolom) % 2) == 0)
            {
                genap++;
            }
        }
    }

    printf("========================================\n");
    printf("       BILANGAN GENAP DALAM TABEL       \n");
    printf("========================================\n");
    printf("%-15s: %d\n", "Jumlah baris", n);
    printf("%-15s: %d\n", "Jumlah kolom", m);
    printf("----------------------------------------\n");
    printf("%-15s: %d\n", "Total sel", n * m);
    printf("%-15s: %d\n", "Bilangan genap", genap);
    printf("========================================\n");

    return 0;
}