#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define PI 3.141592


int main(void)


{ double seno,X;
char buffer[100];


FILE *dato;
FILE *dato2;


dato = fopen("numero.txt","r");
if (dato == NULL)
{
printf("el archivo numero.txt no se puede abrir\n");
exit(-1);
}
fread (buffer, 1, 100, dato);
X = atof(buffer);
fclose(dato);
seno=pow((sin(PI/('X'))),2);


dato2 = fopen("sineresult.txt","w");


fprintf(dato2,"%lf",seno);
fclose(dato2);
}


