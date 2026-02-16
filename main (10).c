#include <stdio.h>

int main() {

    int n, i = 0, mayor, menor;

    printf("Cuántos números vas a leer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Cantidad inválida.\n");
        return 1;
    }

    int numeros[n];  // Ahora sí, después de leer n

    while (i < n) {
        printf("Dame un número: ");
        scanf("%d", &numeros[i]);

        if (i == 0) {
            mayor = numeros[i];
            menor = numeros[i];
        } else {
            if (numeros[i] > mayor)
                mayor = numeros[i];

            if (numeros[i] < menor)
                menor = numeros[i];
        }

        i++;
    }

    printf("Números ingresados: ");
    i = 0;
    while (i < n) {
        printf("%d ", numeros[i]);
        i++;
    }

    printf("\nEl número mayor es: %d\n", mayor);
    printf("El número menor es: %d\n", menor);

    return 0;
}