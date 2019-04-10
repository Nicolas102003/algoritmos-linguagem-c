#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color 0A");
	setlocale(LC_ALL, "Portuguese"); 	
	float a,b,soma;	
	printf("\n\t algoritmo 2 \n\n");
	printf("\n\t digite o primeiro numero\n\n");
	scanf("%f",&a);
	printf("\n\t digite o primeiro numero\n\n");
	scanf("%f",&b);
	soma=a+b;
	printf("\n \t  o resultado da soma e: %.0f\n\n",soma);
	system("PAUSE");	
 	 return 0;
 }
