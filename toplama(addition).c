#include <stdio.h>
int main(void)
{
    int sayi1;
    int sayi2;
    int toplam;

    printf("Birinci sayiyi giriniz\n");
    scanf("%d",&sayi1);

    printf("Ikinci sayiyi giriniz\n");
    scanf("%d",&sayi2);

    toplam = sayi1+sayi2;

    printf("Sonuc %d'dir.",toplam);
    return 0;
}
