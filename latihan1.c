#include <stdio.h>

int main(void)
{
    int tinggi;
    int baris;
    int kolom;

   
    do
    {
        printf("Masukkan tinggi pola 1-20: ");
        scanf("%d", &tinggi);
        if ((tinggi < 1) || (tinggi > 20))
        {
            printf("Tinggi harus berada pada rentang 1-20.\n");
        }
    } while ((tinggi < 1) || (tinggi > 20));

    printf("\nPOLA SEGITIGA\n");
    for (baris = 1; baris <= tinggi; baris++)
    {
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}