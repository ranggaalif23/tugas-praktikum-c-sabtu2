#include <iostream>
#include <stdio.h>

int main (){
	
	int celcius ;
	float fahrenheit,reamur;
	
//	masukan suhu dalam celcius
	printf("MASUKAN SUHU DALAM CELCIUS : ");
	scanf("%d",&celcius);
	
//	mengkonversikan atau mengubah dari celcius ke fahrenheit dan reamur
	fahrenheit = (celcius * 9.0/5.0)+32;
	reamur = celcius * 4.0/5.0;
	
//	hasil
	printf("SUHU DALAM CELCIUS KE FAHRENHEIT : %.2f\n",fahrenheit);
	printf("SUHU DALAM CELCIUS KE REAMUR : %.2f ",reamur);
	
	return 0;
	
}
