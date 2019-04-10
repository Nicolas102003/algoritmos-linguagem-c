#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color 0A");
	setlocale(LC_ALL, "Portuguese"); 	
	float a,b,m;	
	printf("\n\t algoritmo 6 \n\n");
	printf("\n\t digite o valor de A\n\n");
	scanf("%f",&a);
	printf("\n\t digite o valor de B\n\n");
	scanf("%f",&b);
	m=(a+b)/2;			
	printf("\n \t  a média dos valores e: %f\n\n",m);
	system("PAUSE");	
 	 return 0;
 }
