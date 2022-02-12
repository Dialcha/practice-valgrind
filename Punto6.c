#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int *data;
    data=(int*)malloc(5*sizeof(int));
    data[4] = 10;
    free(data);
    printf("\n %d", (data[4]));
    return 0;
}