#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char metin[1000];
	
	printf("Tersten yazdirmak istediginiz metni giriniz: ");
    gets(metin);
    int i;
    int boyut = strlen(metin);
    // metnin boyutunu strlen ile ald�k.
    
    for(i=0;i<=boyut;i++)
    // eger boyut '<=' olmasayd� boyut-i-1 yapmam�z gerekirdi.   
{
		printf("%c",metin[boyut-i]);	
	}
	return 0;
} 
