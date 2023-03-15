#include <stdio.h>
int main(void)
{
    int sayi1;
    int sayi2;

    printf("2 sayi gir ve ben de sana aralarindaki iliskiyi soyleyeyim.\n");
    scanf("%d%d", &sayi1,&sayi2);

    if (sayi1 > sayi2) {
        printf("%d,%d'den buyuktur.",sayi1,sayi2);
    }
    if (sayi1<sayi2) {
        printf("%d,%d'den buyuktur.",sayi2,sayi1);
    }
    if (sayi1==sayi2) {
        printf("%d ve %d birbirilerine esittir.",sayi1,sayi2);
    }
    return 0;

}
