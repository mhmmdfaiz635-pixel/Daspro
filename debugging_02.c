#include <stdio.h>

int main(void)
{
    int hari;
    int transaksi;
    double nilai_transaksi;
    double total_harian = 0.0;
    double total_keseluruhan;
    for (hari = 1; hari <= 3; hari++)
    {
        printf("\nHari ke-%d\n", hari);
        for (transaksi = 1; transaksi < 4; transaksi++)
        {
            printf("Transaksi ke-%d: ", transaksi);
            scanf("%d", &nilai_transaksi);
            total_harian = nilai_transaksi;
        }
        printf("Total hari ke-%d: %.2f\n", hari, total_harian);
        total_keseluruhan = total_keseluruhan + total_harian;
    }
    printf("\nTotal keseluruhan: %.2f\n", total_keseluruhan);
    return 0;
}
