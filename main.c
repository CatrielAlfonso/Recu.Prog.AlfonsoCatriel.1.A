#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
    int isEmpty;

} ePais;

void actualizarRecuperados(ePais pais,int recuperadosDelDia);
void invertirCadena(char cadena[]);

int main()
{

   ePais Colombia;

   printf("%d\n",Colombia.recuperados);
   actualizarRecuperados(Colombia,5);
     printf("%d\n",Colombia.recuperados);


   /* char cadena[20]="CADENA";

    printf("%s\n",cadena);
    invertirCadena(cadena);
    printf("%s\n",cadena);
    */


    return 0;
}

void actualizarRecuperados(ePais pais,int recuperadosDelDia)
{
    pais.recuperados= pais.recuperados + recuperadosDelDia;

}

void invertirCadena(char cadena[])
{
    int longitud = strlen(cadena);
    int i;
    for (i = 0; i < strlen(cadena) / 2; i++)
    {
        char temporal = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = temporal;
    }
}
