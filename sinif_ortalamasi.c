#include <stdio.h>
int main(void)
{
    int sayac;
    int not;
    int toplam;
    int ortalama;
    int kisi_sayisi;

    printf("Siniftaki kisi sayisini giriniz: ");
    scanf("%d",&kisi_sayisi);

    toplam = 0;
    sayac = 1;

    while (sayac <= kisi_sayisi ) {
        printf("%d. ogrencinin notunu giriniz:",sayac );
        scanf("%d",&not);
        toplam = toplam + not;
        sayac = sayac + 1;
    }
    ortalama = toplam / kisi_sayisi;
    printf("Sinif ortalamasi %d'dir\n",ortalama);
    return 0;
}
