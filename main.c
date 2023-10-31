#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcula_2grau(float a, float b, float c, float *delta, float *x1, float *x2){
	
	*delta=b*b-4*a*c; 
	if(*delta<0){
		printf("Nao possui valores reais");
		*x1=0;
		*x2=0;
		
	}else{
		
		*x1=(-b+sqrt(*delta))/(2*a);
		*x2=(-b-sqrt(*delta))/(2*a);
	}
}

void main(){

	float a, b, c, delta, x1, x2;

     printf("Digite o valor de a:");
     scanf("%f", &a);
     
     printf("Digite o valor de b:");
     scanf("%f", &b);
     
     printf("Digite o valor de c:");
     scanf("%f", &c);
	
	calcula_2grau(a, b, c, &delta, &x1, &x2);
     	
     	printf("\nResultado apontada por delta: %.2f\n", delta);
		printf("Resultado apontada por x1: %.2f\n", x1);
		printf("Resultado apontada por x2: %.2f\n", x2);
		
		printf("Ponteiro delta: %p\n", &delta);
		printf("Ponteiro x1: %p\n", &x1);
		printf("Ponteiro x2: %p\n", &x2);
		
		system("pause");
	
}
