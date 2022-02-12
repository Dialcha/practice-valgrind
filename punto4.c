#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int *pe;
    int tam;
    int f;
    printf("Cuantos elementos tendra el vector:");
    scanf("%i",&tam);
    pe=malloc(tam*sizeof(int));
    for(f=0;f<tam;f++)
    {
        printf("Ingrese elemento:");
        scanf("%i",&pe[f]);
    }
    return 0;
}