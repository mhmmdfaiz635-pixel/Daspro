#include <stdio.h>

int main(void)
{
    int batas;
    int baris;
    int kolom;

    do
    {
        printf("Masukkan batas tabel 1-12: ");
        scanf("%d", &batas);
        if ((batas < 1) || (batas > 12))
        {
            printf("Batas harus berada pada rentang 1-12.\n");
        }
    } while ((batas < 1) || (batas > 12));

    printf("\nTABEL PERKALIAN\n\n");
    printf("%5s", "x");
    for (kolom = 1; kolom <= batas; kolom++)
    {
        printf("%5d", kolom);
    }
    printf("\n");

    for (baris = 1; baris <= batas; baris++)
    {
        printf("%5d", baris);
        for (kolom = 1; kolom <= batas; kolom++)
        {
            printf("%5d", baris * kolom);
        }
        printf("\n");
    }

    return 0;
}