#include <stdio.h>

int main(void)
{
    int jumlah_mahasiswa;
    int jumlah_tugas;
    int mahasiswa;
    int tugas;
    double nilai;
    double total_mahasiswa;
    double rata_rata_mahasiswa;
    double total_keseluruhan = 0.0;
    double rata_rata_keseluruhan;
    int jumlah_nilai = 0;

    do
    {
        printf("Masukkan jumlah mahasiswa 1-30: ");
        scanf("%d", &jumlah_mahasiswa);
    } while ((jumlah_mahasiswa < 1) || (jumlah_mahasiswa > 30));

    do
    {
        printf("Masukkan jumlah tugas 1-10: ");
        scanf("%d", &jumlah_tugas);
    } while ((jumlah_tugas < 1) || (jumlah_tugas > 10));

    for (mahasiswa = 1; mahasiswa <= jumlah_mahasiswa; mahasiswa++)
    {
        total_mahasiswa = 0.0;
        printf("\nMahasiswa ke-%d\n", mahasiswa);
        for (tugas = 1; tugas <= jumlah_tugas; tugas++)
        {
            do
            {
                printf("Nilai tugas ke-%d: ", tugas);
                scanf("%lf", &nilai);
                if ((nilai < 0.0) || (nilai > 100.0))
                {
                    printf("Nilai harus berada pada rentang 0-100.\n");
                }
            } while ((nilai < 0.0) || (nilai > 100.0));

            total_mahasiswa += nilai;
            total_keseluruhan += nilai;
            jumlah_nilai++;
        }

        rata_rata_mahasiswa = total_mahasiswa / jumlah_tugas;
        printf("Total mahasiswa ke-%d    : %.2f\n", mahasiswa, total_mahasiswa);
        printf("Rata-rata mahasiswa ke-%d: %.2f\n", mahasiswa, rata_rata_mahasiswa);
    }

    rata_rata_keseluruhan = total_keseluruhan / jumlah_nilai;
    printf("\nREKAP KESELURUHAN\n");
    printf("Jumlah nilai      : %d\n", jumlah_nilai);
    printf("Total keseluruhan : %.2f\n", total_keseluruhan);
    printf("Rata-rata umum    : %.2f\n", rata_rata_keseluruhan);

    return 0;
}