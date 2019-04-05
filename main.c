#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float a ;
    float b;
    int flagA = 0;
    int flagB = 0;
    while(seguir=='s')
    {
        if(flagA == 0)
            {
                printf("\n1- Ingresar 1er operando (A=x)\n");
            }
            else
                {
                printf("1- Ingresar 1er operando (A=%.2f)\n", a);
                }
        if(flagB == 0)
            {
                printf("2- Ingresar 2do operando (B=y)\n");
            }
            else
                {
                printf("2- Ingresar 2do operando (B=%.2f)\n", b);
                }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                printf("Ingrese 1er operando: ");
                scanf("%f", &a);
                flagA = 1;
                break;
            case 2:
                printf("Ingrese 2do operando: ");
                scanf("%f", &b);
                flagB = 1;
                break;
            case 3:
                if(flagA != 0 && flagB != 0)
                {
                    printf("La suma de los numeros es: %.2f\n", sumar(a,b));
                }
                else
                {
                    printf("Error. Debe ingresar ambos datos para poder operar.\n");
                }
                break;
            case 4:
                if(flagA != 0 && flagB != 0)
                {
                    printf("La resta de los numeros es: %.2f\n", restar(a,b));
                }
                else
                {
                    printf("Error. Debe ingresar ambos datos para poder operar.\n");
                }
                break;
            case 5:
                if(flagA != 0 && flagB != 0)
                {
                    dividir(a,b);
                }
                else
                {
                    printf("Error. Debe ingresar ambos datos para poder operar.\n");
                }
                break;
            case 6:
                if(flagA != 0 && flagB != 0)
                {
                    printf("La multiplicacion de los numeros es: %.2f\n", multiplicar(a,b));
                }
                else
                {
                    printf("Error. Debe ingresar ambos datos para poder operar.\n");
                }
                break;
            case 7:
                if(flagA != 0 && flagB != 0)
                {
                    factorial(a);
                    factorial(b);
                }
                else
                {
                    printf("Error. Debe ingresar ambos datos para poder operar.\n");
                }
                break;
            case 8:
                if(flagA != 0 && flagB != 0)
                {
                    printf("La suma de los numeros es: %.2f\n", sumar(a,b));
                    printf("La resta de los numeros es: %.2f\n", restar(a,b));
                    dividir(a,b);
                    printf("La multiplicacion de los numeros es: %.2f\n", multiplicar(a,b));
                    factorial(a);
                    factorial(b);
                }
                else
                {
                    printf("Error. Debe ingresar ambos datos para poder operar.\n");
                }
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                if(opcion !=9)
                    {
                        printf("Error. Ingrese una oprcion valida.\n");
                    }
        }
        fflush(stdin);
    }
    return 0;
}


