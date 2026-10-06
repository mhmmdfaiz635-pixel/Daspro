#include<stdio.h>
int main(void)

{
    int baris_target;
    int kolom_target;
    int baris;
    int kolom;

    do
    {
        printf("Masukkan baris target 1-5: ");
        scanf("%d", &baris_target);
    }
    while ((baris_target < 1) || (baris_target > 5));

    do
    {
        printf("Masukkan kolom target 1-5: ");
        scanf("%d", &kolom_target);
    }
    while ((kolom_target < 1) || (kolom_target > 5));

    printf("\nPAPAN 5 X 5\n");
    for (baris = 1; baris <= 5; baris++)
    {
        for (kolom = 1; kolom <= 5; kolom++)
        {
            if ((baris == baris_target) && (kolom == kolom_target))
            {
                printf("X ");
            }
            else
            {
                printf("- ");
            }
        }
        printf("\n");
    }
    return 0;
}