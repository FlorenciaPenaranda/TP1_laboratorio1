float sumar(float x, float y)
{
    return x + y;
}

float restar(float x, float y)
{
    return x - y;
}

float dividir(float x, float y)
{
    if(y != 0)
    {
        printf("La division de los numeros es: %.2f\n", x/y);
    }
    else
    {
        printf("Error. No se puede dividir por 0.\n");
    }
}

float multiplicar (float x, float y)
{
    return x * y;
}

long long int factorial (float x)
{
    long long int resultadoFactorial = 1;
    int parteEntera;
    int i;
    parteEntera = x;
    if(parteEntera - x <0)
    {
        printf("Error, no se puede calcular el factorial de un numero decimal.\n");
    }
    else
    {
        for( i = 1 ; i <= x ; i ++ )
        {
            resultadoFactorial = resultadoFactorial * i;
        }
        printf("El factorial de %i es: %lli \n", parteEntera, resultadoFactorial);

        }
}
