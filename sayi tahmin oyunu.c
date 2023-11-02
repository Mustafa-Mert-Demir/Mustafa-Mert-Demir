#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi,rando;
	srand(time(0));
	// rastgele sayý üretmek için  seed ayarý.
	rando=rand()%100 +1;
	// bir 100 arasý rastgele sayý üretme
	
	
	printf("Sayi tahmin oyununa giri yaptiniz.\n");
	printf("Oyuna baslamak icin bir sayi tuslayiniz: ");
	scanf("%d",&sayi);
	
while(sayi!=rando){

	if(sayi>rando){
		
		printf("Azalt\n");

			}
	else{
	
		printf("Arttir\n");
	
	}
	
	printf("Baska bir tahmin giriniz:");
	scanf("%d",&sayi);
				
	}
	

	
printf("tebrikler sayiyi buldunuz: %d",rando);
	
	return 0;
}
