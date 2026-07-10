#include <stdio.h>

int main() {
    float peso, altura, imc;
    
 do {
    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);

    if (peso < 0) {
        printf("Error: el peso no puede ser negativo.\n");
    }

} while (peso < 0);

do {
    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    if (altura < 0) {
        printf("Error: la altura no puede ser negativa.\n");
    }

} while (altura < 0);
    
    imc = peso / (altura * altura);
    
    printf("\nSu indice de masa corporal es: %.2f\n\n", imc);
    if (imc < 18.5) {
    printf("Condicion: Bajo peso\n");
} else if (imc < 25) {
    printf("Condicion: Normal\n");
} else if (imc < 30) {
    printf("Condicion: Sobrepeso\n");
} else {
    printf("Condicion: Obesidad\n");
}
    
    printf("    Indice    |  Condicion\n");
    printf("-----------------------------\n");
    printf("    <18.5     |  Bajo peso\n");
    printf(" 18.5 a 24.9  |  Normal\n");
    printf(" 25.0 a 29.9  |  Sobrepeso\n");
    printf("     >=30     |  Obesidad\n");
    
    return 0;
}
