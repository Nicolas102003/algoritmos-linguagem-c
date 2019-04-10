#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color 0A");
	setlocale(LC_ALL, "Portuguese"); 	
	float celsius,kelvin;	
	printf("\n\t algoritmo 7 \n\n");
	printf("\n\t digite a temperatura em celsius\n\n");
	scanf("%f",&celsius);
	kelvin=(celsius+273.15);			
	printf("\n \t  o valor em kelvin é: %2.2f\n\n",kelvin);
	system("PAUSE");	
 	 return 0;
 }
