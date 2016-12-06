#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <string.h>


int main(void)


{ float sumar, seno, coseno;
char buffer[100];
FILE *dato;
FILE *dato2;
FILE *Suma;


dato = fopen("sineresult.txt","r");
if (dato == NULL)
{
printf("el archivo sineresult no se puede abrir\n");
exit(-1);
}


fread (buffer, 1, 100, dato);
seno = atof(buffer);
fclose(dato);




dato2 = fopen("cosresult.txt","r");
if (dato2 == NULL )
{ printf("el archivo cosresult no se puede abrir\n");
exit(-1);
}


fread(buffer,1,100,dato2);
coseno=atof(buffer);
fclose(dato2);
sumar=seno+coseno;


Suma = fopen("suma.txt","w");
if (fd3 == NULL)
{printf("el archivo suma no se puede abrir\n");
exit(-1);
}
fprintf(Suma,"%lf",sumar);
fclose(Suma);


}
