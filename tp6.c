#include <stdio.h>
#define PI 3.14159

float calcularAreaRectangulo (float longitud, float altura);
float calcularPerimetroRectangulo (float longitud, float altura);
float calcularAreaCirculo (float radio);
float calcularPerimetroCirculo (float radio);
void imprimirResultados (float area, float perimetro);

int main (void){
	 int opcion;
	 float longitud, altura, radio;
	 float area, perimetro;
	 printf ("Ingrese la figura que desee calcular (1: rectangulo, 2: circulo): ");
     scanf("%d", &opcion);
     
     while (opcion != 1 && opcion !=2){
     	printf("Opcion invalida, Ingrese 1 para rectangulo y 2 para circulo: ");
     	scanf("%d", &opcion);
	 }
	
	if(opcion==1){
		printf("Opcion de rectangulo seleccionada\n");
		printf("Ingrese la longitud del rectángulo: ");
		scanf("%f", &longitud);
		printf("Ingrese la altura del rectangulo: ");
		scanf("%f", &altura);
		
		area = calcularAreaRectangulo (longitud, altura);
		perimetro = calcularPerimetroRectangulo (longitud, altura);	
	}
	else if (opcion==2){
		printf ("Opción de circulo seleccionada\n");
		printf ("Ingrese el radio del circulo: ");
		scanf ("%f", &radio);
		
		area = calcularAreaCirculo (radio);
		perimetro = calcularPerimetroCirculo (radio);
	}
	imprimirResultados (area, perimetro);
	
	return 0;
}
float calcularAreaRectangulo (float altura, float longitud){
	return altura*longitud;
}
float calcularPerimetroRectangulo (float altura, float longitud){
	return 2*(altura+longitud);
}
float calcularAreaCirculo (float radio){
	return PI*radio*radio;
}
float calcularPerimetroCirculo (float radio){
	return 2*PI*radio;
}
void imprimirResultados (float area, float perimetro){
     printf ("El area es: %.2f\n", area);
     printf ("El perimetro es: %.2f\n", perimetro);
 }
