/*
 Nama        : Muhammad Faiz Qodri Muslim
 NIM         : 2610511179
 Kelas       : E
 Modul       : 6
 Deskripsi   : Debugging Challenge 2 - rekap penjualan 3 hari x 4 transaksi.
               Program asal memiliki 7 kesalahan yang telah diperbaiki.
*/

#include <stdio.h>

int main(void)
{
    int hari;
    int transaksi;
    double nilai_transaksi;
    double total_harian;
    double total_keseluruhan = 0.0;

    for (hari = 1; hari <= 3; hari++)
    {
        total_harian = 0.0; 
        printf("\nHari ke-%d\n", hari);

        for (transaksi = 1; transaksi <= 4; transaksi++)
        {
            do
            {
                printf("Transaksi ke-%d: ", transaksi);
                scanf("%lf", &nilai_transaksi);

                if (nilai_transaksi < 0.0)
                {
                    printf("Nilai transaksi tidak boleh negatif. Silakan masukkan ulang.\n");
                }
            } while (nilai_transaksi < 0.0); 

            total_harian += nilai_transaksi; 
        }

        printf("Total hari ke-%d: %.2f\n", hari, total_harian);
        total_keseluruhan += total_harian;
    }

    printf("\nTotal keseluruhan: %.2f\n", total_keseluruhan);

    return 0;
}