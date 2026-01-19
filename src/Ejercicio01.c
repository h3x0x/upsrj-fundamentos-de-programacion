#include <stdio.h>

//Se uso otro tipo de dato en ves de int, en este caso seria double 

double area(double lado)
{
    return lado * lado;
}


double volumen(double lado)
{
    return lado * lado * lado;
}

//El double se uso para poder insertar tanto enteros como decimales

int main()
{
    double x = 0;


   printf(
    "========================================\n"
    "          Eejercicio 01\n"
    "            by H3X0X\n"
    "========================================\n"
    "\n"
    "  Square                    Cube \n"
    "\n"
    "+---------+              +---------+\n"
    "|         |             /         /|\n"
    "|         |            +---------+ |\n"
    "|         |            |         | +\n"
    "+---------+            |         |/\n"
    "                       +---------+\n"
    "\n"
);

//El %lf se uso para leer los double

    printf("Enter the side of length:");
    scanf("%lf" , &x);

    double a = area(x);
    double v = volumen(x);

//En esta parte se le agrego un if para dar error si se entra un valor - y no +

    if (x < 0)
    {
        printf("Error: El valor debe de ser positivo\n");
        return 1;
    }

//En esta parte el %.2f se uso para dar el resultado con solo 2 decimales

    printf("Area: %.2f\n" , a);
    printf("Volumen: %.2f\n" , v);
    return 0;


}