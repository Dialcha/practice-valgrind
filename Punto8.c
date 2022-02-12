#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){

int *numbers;
    int tam = 4;
    int index = 0;
    int next;
    int f;
   
    numbers=(int*)malloc(tam);
    do {
        printf("Ingrese elemento:");
        scanf("%i",&numbers[index]);
        printf("Desea agregar otro elemento? S/N:");
        scanf("%i", &next);
        if(next == 1){
            index++; 
            tam += 4;
            numbers = (int*) realloc(numbers, tam);
        }
    }
    while (next != 0);
    printf("Contenido del vector dinamico:");
    for(f=0;f<tam/4;f++)
    {
        printf("%i ",numbers[f]);
    }
    free(numbers);

    return 0;
}