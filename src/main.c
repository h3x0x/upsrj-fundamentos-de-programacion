#include <stdio.h>

/*
    En este paso se declara el nombre de la funcion como is _even
    y se define que recibe un parametro de tipo entero.
    La funcion retorna 1 si el numero es par y 0 si es impar.

*/

int is_even(int numero)
{
    if (numero % 2 == 0)
        return 1; // Verdadero
    else
        return 0; // Falso
}

int main()
{
    int numero;

//En esta parte se solicita al usuario que ingrese un numero
// y se almacena en la variable numero.

    printf("Ingrese un numero para testear: ");
    scanf("%i", &numero);

//Se llama a la funcion is_even para verificar si el numero es par o impar   

    if (is_even(numero))

        printf("EL NUMERO ES PAR.\n", numero);

    else

        printf("EL NUMERO ES IMPAR.\n", numero);

    return 0;
}