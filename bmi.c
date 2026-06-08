#include <stdio.h>

int main(int argc, char *argv[]) {
float peso, altura, indice;
printf("Ingrese su peso en kg:");
scanf("%f", &peso);
printf("\n Ingrese su altura en metros:");
scanf("%f", &altura);
indice= (float) peso/(altura*altura);
printf("\n Su indice de masa corporal es: %f", indice);
printf("\n\n Tabla de referencia: \n <18.5  Bajo peso \n 18.5 a 24.9  Normal \n 25.0 a 29.9  Sobrepeso \n >=30  Obesidad");
	return 0;
}

