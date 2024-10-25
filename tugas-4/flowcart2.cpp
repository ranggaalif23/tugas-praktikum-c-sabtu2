#include <stdio.h>

int main (){
	
	int n;
	int n1;
	int n2;
	
	printf("\nMasukan angka :");
	scanf("%i",&n);
	
	n1 = n - 25;
	n2 = n + 10;
	
	if(n>50){
			printf("\nHasil angka yang di masukan : %i\n",n2);
	}
	else{
		printf("hasil angka yang anda masukan :%i",n1);
	}
	
	return 0;
	
}
