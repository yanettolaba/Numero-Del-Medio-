#include <stdio.h>
#include <stdlib.h>

int main()
{   int numeroUno;
    int numeroDos;
    int numeroTres;
    int maximo;
    int minimo;

    scanf("%d",&numeroUno);
    maximo = numeroUno;
    minimo = numeroUno;

    scanf("%d", numeroDos);

    if(numeroDos < minimo)
    { minimo = numeroDos;
    } else
    {
     if (numeroDos>maximo)
     {
         maximo = numeroDos;
     }
    }

    return 0;
}
