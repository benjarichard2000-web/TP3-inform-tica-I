#include <stdio.h>
#define tam 5
//https://github.com/benjarichard2000-web/TP3-inform-tica-I
int main(int argc, char *argv[]) {
int codigos [tam];
float precios [tam];
int i;
int codigo;
float precio;
float mayor, menor;
int elmayor, elmenor;
for(i=0; i<tam; i++){
	do{
		printf("ingresar codigo de barras del producto (1-999999999):");
		scanf("%d", &codigo);
		if(codigo<1||codigo>999999999){
			printf("Error. El codigo debe estar entre 1 y 999999999\n");
		}
		
	} while(codigo<1||codigo>999999999);
	codigos[i]=codigo;
	do{
		printf("\ningresar precio del producto:");
		scanf("%f", &precio);
		if(precio<0){
			printf("Error. El precio no puede ser negativo");
		}
	} while(precio<0);
	precios[i]=precio;
}
printf("codigo de barras     precio\n");
for(i=0; i<tam; i++){
	printf("%10d %15.2f\n", codigos[i], precios[i]);
}
mayor=precios[0];
menor=precios[0];
elmayor=0;
elmenor=0;
for(i=1; i<tam; i++){
	if(precios[i]>mayor){
		mayor=precios[i];
		elmayor=i;
	}
	if(precios[i]<menor){
		menor=precios[i];
		elmenor=i;
	}
}
printf("Mas caro: [%d] %.2f\n", codigos[elmayor], precios[elmayor]);
printf("Mas barato: [%d] %.2f\n", codigos[elmenor], precios[elmenor]);
		
	return 0;
}

