//
//lectura archivo csv
//@Copyright TDA Otoño 2020
//@License TDA
//@Author: Elian Rueda Espinosa
//@Author: Diego Hernandez Alanis
//@Author: Alan Josue Josue Lopez
//@File
//
#ifndef prototype_h
#define prototype_h

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFSIZE 1024

#ifdef prototype_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif



/**
 * funcion con la cual se leera el archivo
 * @param
* File archivo
*double my_mat
* @return my_mat */
EXTERN double **leer_archivo(FILE *archivo,double *my_mat[]);




/**
 * Funcion auxiliar si queremos escribir en el archivo.
 * @param
 *matriz
*/
EXTERN void print_Arch_csv(double *matriz);




#undef files_IMPORT
#undef EXTERN



#endif /* prototype_h */
