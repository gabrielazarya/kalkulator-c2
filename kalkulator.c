#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b;
    int opsi, main;

    main :
    printf("PROGRAM KALKULATOR\n");
    printf("1. Penambahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("0. Ngga jadi deh :D\n");
    printf("Masukan Pilihanmu\t:"); 
    scanf("%d", &opsi);

    printf("\n\n");
         switch (opsi){
            case 1:
            printf("Masukkan Angka Pertama\t:");
            scanf("%f", &a);
            printf("Masukkan Angka Kedua\t:");
            scanf("%f", &b);
            printf("Hasil dari %.2f + %.2f = %2f\n", a, b, a+b);
            goto main;

            case 2:
            printf("Masukkan Angka Pertama\t:");
            scanf("%f", &a);
            printf("Masukkan Angka Kedua\t:");
            scanf("%f", &b);
            printf("Hasil dari %.2f - %.2f = %2f\n", a, b, a-b);
            goto main;

            case 3:
            printf("Masukkan Angka Pertama\t:");
            scanf("%f", &a);
            printf("Masukkan Angka Kedua\t:");
            scanf("%f", &b);
            printf("Hasil dari %.2f * %.2f = %2f\n", a, b, a*b);
            goto main;

            case 4:
            printf("Masukkan Angka Pertama\t:");
            scanf("%f", &a);
            printf("Masukkan Angka Kedua\t:");
            scanf("%f", &b);
            printf("Hasil dari %.2f / %.2f = %2f\n", a, b, a/b);
            goto main;

            case 5:
            break;
         }
            
        return 0;
}
    
