#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%d%d",&a,&b);
    if(a==b){
        printf("%d sayisi %d sayisina esittir\n",a,b);
    }
    if(a!=b){
        printf("2 sayi birbirine esit degildir.\n");
    }
    if(a<b){
        printf("a degeri b'den kucuktur.\n");
    }
    if(a>b){
        printf("a degeri b'den buyuktur\n");
    }

    if(a%b==0){
        printf("A B'nin tam katidir.\n");
    }
    else{
        printf("A B'nin tam kati degildir.");
    }
}
