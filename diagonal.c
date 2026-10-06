/*
 Nama        : Muhammad Faiz Qodri Muslim
 NIM         : 2610511179
 Kelas       : E
 Modul       : 6
 Deskripsi   : Program membentuk matriks perkalian n x n menggunakan nested
               loop, lalu menghitung jumlah nilai pada diagonal utama dan
               jumlah nilai di luar diagonal.
*/

#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int j;
    int total_diagonal = 0;
    int total_non_diagonal = 0;
    int total_keseluruhan;

    if (scanf("%d", &n) != 1)
    {
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j)
            {
                total_diagonal += i * j;
            }
            else
            {
                total_non_diagonal += i * j;
            }
        }
    }

    total_keseluruhan = total_diagonal + total_non_diagonal;

    printf("========================================\n");
    printf("       DIAGONAL MATRIKS PERKALIAN       \n");
    printf("========================================\n");
    printf("%-18s: %d\n", "Ukuran matriks", n);
    printf("----------------------------------------\n");
    printf("%-19s: %d\n", "Total diagonal", total_diagonal);
    printf("%-19s: %d\n", "Total non-diagonal", total_non_diagonal);
    printf("%-19s: %d\n", "Total keseluruhan", total_keseluruhan);
    printf("========================================\n");

    return 0;
}