#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	main(int argc, char *argv[]) {
	int a,n,i;
	printf("Kac ogrenci girisi yapacaksiniz?\n");
	scanf("%d",&n);
	
	int yaslar[n];
	for(i=0;i<n;i++){
		printf("%d. ogrencinin yasini giriniz:\n ",i+1);
		scanf("%d",&a);
		yaslar[i]=a;
		
	}
	i=0;
		while(i<n){
			printf("%d. ogrencinin yasi: %d\n",i+1,yaslar[i]);
			i++;
		
		}
	

	return 0;
}
