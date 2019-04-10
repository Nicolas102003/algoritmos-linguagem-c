#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color 0A");
	setlocale(LC_ALL, "Portuguese"); 	
	float peso,altura,imc;	
	printf("\n\t algoritmo 6 \n\n");
	printf("\n\t digite o seu peso\n\n");
	scanf("%f",&peso);
		printf("\n\t digite a sua altura\n\n");
	scanf("%f",&altura);
	imc=peso/(altura*altura);			
	printf("\n \t  o resultado e: %2.2f\n\n",imc);
	system("PAUSE");	
 	 return 0;
 }
