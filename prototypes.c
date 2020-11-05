//
//
//
//
//
//
//
//
//lectura de archivo csv
 //@Copyright TDA Otoño 2020
//@License TDA
//@Author: Elian Rueda Espinosa
//@Author: Diego Hernandez Alanis
//@Author: Alan Josue Lopez Lopez
//@file
//


//prototype.c
//Llamamos prototype la cual continie las funciones
#include"prototypes.h"



double **leer_archivo(FILE *archivo,double *my_mat[]){
//declaracion de variables
  int i=0;
  int b=0;
  double *valores;
  double *f2;
  char *coma=",";
  char *salto="\n";
  char fila[80];
  char *status;
  char *ayuda=NULL;




my_mat=malloc(sizeof(double*)*BUFSIZE);//se le asigna memoria a my_mat


  while(fgets(fila,80,archivo)){



  valores=malloc(sizeof(double)*BUFSIZE);//se le asigna memoria a valores

  ayuda=strtok(fila,coma);//se guarda el string hasta encontar la coma


while( ayuda != NULL ) {
    i++;

  valores[i]= strtof(ayuda,NULL);//guarda el primer numero como float
  ayuda=strtok(NULL,coma);//avanza hasta el sigiente string

  printf("%f, ",valores[i]);//Imprimimos los valores
}
printf("\n");

   valores=realloc(valores,i);//ajusta la memoria al tamaño del arreglo

  my_mat[b]=valores;//se guarda el arreglo 

  b++;

}

  return my_mat;
}
