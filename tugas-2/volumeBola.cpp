#include <iostream>
#include <math.h>

int main(){
	float volume , diameter , jari ,pi = 3.14 ; 
	
	diameter = 15;
	
	jari = diameter / 2;
	
	volume = 4/3 * pi * pow(jari,3);
	
	printf("jadi volume lingkarannya adalah");
	printf("\nDiameter Bola = %.2f",diameter);
	printf("volume = %.2f",volume);
	
	return 0;
	
}
