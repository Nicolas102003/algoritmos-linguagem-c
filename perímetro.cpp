#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color 0A");
	setlocale(LC_ALL, "Portuguese"); 	
	float a,perimetro;	
	printf("\n\t algoritmo 1 \n\n");
	printf("\n\t digite o valor do lado\n\n");
	scanf("%f",&a);
	perimetro=4*a;			
	printf("\n \t  o resultado da soma e: %.0f\n\n",perimetro);
	system("PAUSE");	
 	 return 0;
 }
