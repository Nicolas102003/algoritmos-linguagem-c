#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color 0A");
	setlocale(LC_ALL, "Portuguese"); 	
	float a,quadrado;	
	printf("\n\t algoritmo 3 \n\n");
	printf("\n\t digite o número\n\n");
	scanf("%f",&a);
	quadrado=a*a;			
	printf("\n \t  o resultado e: %.0f\n\n",quadrado);
	system("PAUSE");	
 	 return 0;
 }
