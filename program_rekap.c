/*
Nama        : Muhammad Faiz Qodri Muslim
NIM         : 2610511179
Kelas       : E
Modul       : 6
Deskripsi   : Program mengolah data penjualan beberapa hari
              dan produk menggunakan perulangan bersarang.
*/

#include <stdio.h>

int main(void)
{
    int jumlah_hari;
    int jumlah_produk;
    int hari;
    int produk;
    int jumlah_unit;
    int seluruh_unit = 0;
    int hari_tertinggi = 1;
    
    double harga_satuan;
    double subtotal;
    double total_harian;
    double total_keseluruhan = 0.0;
    double nilai_tertinggi = 0.0;
    double rata_rata_harian;
    double rata_rata_data_produk;

    printf("================================================\n");
    printf("       REKAP PENJUALAN HARIAN DAN PRODUK        \n");
    printf("================================================\n");

    do
    {
        printf("Masukkan jumlah hari 1-7: ");
        scanf("%d", &jumlah_hari);
        if ((jumlah_hari < 1) || (jumlah_hari > 7))
        {
            printf("Jumlah hari tidak valid.\n");
        }
    } while ((jumlah_hari < 1) || (jumlah_hari > 7));

    do
    {
        printf("Masukkan jumlah produk 1-10: ");
        scanf("%d", &jumlah_produk);
        if ((jumlah_produk < 1) || (jumlah_produk > 10))
        {
            printf("Jumlah produk tidak valid.\n");
        }
    } while ((jumlah_produk < 1) || (jumlah_produk > 10));

    for (hari = 1; hari <= jumlah_hari; hari++)
    {
        total_harian = 0.0;
        
        printf("\nHARI KE-%d\n", hari);
        printf("===============\n");

        for (produk = 1; produk <= jumlah_produk; produk++)
        {
            printf("Produk ke-%d\n", produk);

            do
            {
                printf("  Jumlah unit: ");
                scanf("%d", &jumlah_unit);
                if ((jumlah_unit < 0) || (jumlah_unit > 1000))
                {
                    printf("  Jumlah unit tidak valid (0-1000).\n");
                }
            } while ((jumlah_unit < 0) || (jumlah_unit > 1000));

            do
            {
                printf("  Harga satuan: ");
                scanf("%lf", &harga_satuan);
                if (harga_satuan <= 0.0)
                {
                    printf("  Harga satuan harus lebih dari 0.\n");
                }
            } while (harga_satuan <= 0.0);

            subtotal = jumlah_unit * harga_satuan;
            total_harian += subtotal;
            seluruh_unit += jumlah_unit;

            printf("  Subtotal   : Rp%.2f\n", subtotal);
        }

        printf("Total hari ke-%d: Rp%.2f\n", hari, total_harian);

        total_keseluruhan += total_harian;

        if (hari == 1 || total_harian > nilai_tertinggi)
        {
            nilai_tertinggi = total_harian;
            hari_tertinggi = hari;
        }
    }

    rata_rata_harian = total_keseluruhan / jumlah_hari;
    rata_rata_data_produk = total_keseluruhan / (jumlah_hari * jumlah_produk);

    printf("\n================================================\n");
    printf("                REKAP KESELURUHAN               \n");
    printf("================================================\n");
    printf("Jumlah hari              : %d\n", jumlah_hari);
    printf("Jumlah produk per hari   : %d\n", jumlah_produk);
    printf("Jumlah seluruh unit      : %d\n", seluruh_unit);
    printf("Total keseluruhan        : Rp%.2f\n", total_keseluruhan);
    printf("Rata-rata per hari       : Rp%.2f\n", rata_rata_harian);
    printf("Rata-rata per data produk: Rp%.2f\n", rata_rata_data_produk);
    printf("Hari penjualan tertinggi : Hari ke-%d\n", hari_tertinggi);
    printf("Nilai tertinggi          : Rp%.2f\n", nilai_tertinggi);
    printf("================================================\n");

    return 0;
}