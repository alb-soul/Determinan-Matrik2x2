#include <stdio.h>

int main() {
    int matrik[2][2];
    //Pengisian nilai elemen matrik
    for (int j=0;j<2;j++) {
        printf("Isi C nilai matriks baris %i kolom 1-2\n",j+1);
        for (int i=0;i<2;i++) {
ulang:
            printf("Kolom ke-%i : ",i+1);
            if (scanf("%i",&matrik[j][i])!=1) { //Input and also validate it
                while ((getchar())!='\n');
                puts("Hanya isi angka!"); goto ulang;
            }
        }
    }
    //Penghitungan determinan
    int det = (matrik[0][0]*matrik[1][1]) - (matrik[0][1]*matrik[1][0]);
    fputs("\nDeterminan matrik tersebut adalah ",stdout);
    printf("%i\n",det);
    return 0;
}