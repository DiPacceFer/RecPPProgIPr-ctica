#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float aplicarDescuento(float precioProducto);
int contarCaracteres(char cadena[], char caracter);

int main()
{
    float precioProducto=100;
    float total=0;

    total = aplicarDescuento(precioProducto);
    printf("%.2f", total);




    return 0;
}

float aplicarDescuento(float precioProducto)
{
    float totalConDesc=0;
    if(precioProducto > 0)
    {
        totalConDesc = precioProducto * 0.95;

    }
    return totalConDesc;
}

int contarCaracteres(char cadena[], char caracter)
{
    int repeticiones=0;
    int tam = strlen(cadena);
    if(cadena != NULL && caracter != NULL)
    {
        for(int i=0;i<tam;i++)
        {
            if(cadena[i]==caracter)
            {
                repeticiones++;
            }
        }
    }
    return repeticiones;
}
