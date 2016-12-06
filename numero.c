#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv) {
    double x;
    char *filename;
    FILE *dato;
    if (argc != 3) {
    printf("se requieren dos argumentos <float> <filename>\n");
    exit(-1);
    }
    x = atof(argv[1]);
    filename = (char*)malloc(sizeof(char)*strlen(argv[2]));
    strcpy(filename,argv[2]);
    dato = fopen(filename,"w");
    if (dato == NULL) {
    printf("El archivo no puede ser creado\n");
    exit(-1);
    }
    fprintf(dato,"%lf",x);
    fclose(dato);
}
