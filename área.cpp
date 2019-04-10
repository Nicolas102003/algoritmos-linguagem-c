#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color 0A");
	setlocale(LC_ALL, "Portuguese"); 	
	float r,a;	
	printf("\n\t algoritmo 4 \n\n");
	printf("\n\t digite o raio\n\n");
	scanf("%f",&r);
	a=3.14*(r*r);
	printf("\n \t  a area e: %f\n\n",a);
	system("PAUSE");	
 	 return 0;
 }

	
