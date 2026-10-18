// Repositorio: https://github.com/franconahuelsoriaruiz-dev/bmi-calculadora2
#include <stdio.h>

#define TAM 5

int main(void) {
    int codigos[TAM];
    float precios[TAM];
    int i;

    printf("Ingrese %d productos, se solicitará el código y precio:\n", TAM);

    // a) Carga de productos con validaciones
    for (i = 0; i < TAM; i++) {
        // Validación del código de barras (c)
        do {
            printf("Ingrese el código de barras (1-999999999): ");
            scanf("%d", &codigos[i]);
            if (codigos[i] < 1 || codigos[i] > 999999999) {
                printf("Error. El código de barras debe estar entre 1 y 999999999\n");
            }
        } while (codigos[i] < 1 || codigos[i] > 999999999);

        // Validación del precio (b)
        do {
            printf("Ingrese el precio: ");
            scanf("%f", &precios[i]);
            if (precios[i] < 0) {
                printf("Error. El precio no puede ser negativo\n");
            }
        } while (precios[i] < 0);
    }

    // d) Mostrar lista completa
    printf("\nCódigo    Precio\n");
    for (i = 0; i < TAM; i++) {
        printf("%9d %9.2f\n", codigos[i], precios[i]);
    }

    // e) Mayor precio
    int idxMayor = 0;
    for (i = 1; i < TAM; i++) {
        if (precios[i] > precios[idxMayor]) {
            idxMayor = i;
        }
    }

    // f) Menor precio
    int idxMenor = 0;
    for (i = 1; i < TAM; i++) {
        if (precios[i] < precios[idxMenor]) {
            idxMenor = i;
        }
    }

    printf("\nMás caro: [%d] %.2f\n", codigos[idxMayor], precios[idxMayor]);
    printf("Más barato: [%d] %.2f\n", codigos[idxMenor], precios[idxMenor]);

    return 0;
}
