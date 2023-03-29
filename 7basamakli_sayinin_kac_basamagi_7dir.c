#include <stdio.h>

int main()
{
    long sayi;
    int miktar=0;

    printf("7 basamakli bir sayi giriniz:");
    scanf("%d",&sayi);
    while (sayi>=1){
        if (sayi%10 == 7)
        {
            miktar++;
        }
        sayi=sayi/10;
    }
    printf("Bu sayida %d tane 7 vardir",miktar);
    return 0;
}
