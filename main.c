//
//lectura archivo csv
//@Copyright TDA Otoño 2020
//@License TDA
//@Author: Elian Rueda Espinosa
//@Author: Diego Hernandez Alanis
//@Author: Alan Josue Josue Lopez
//@File
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "prototypes.h"


int main (void){

FILE *fp;
double **matriz;
fp =fopen( "dat.csv", "r");
matriz= leer_archivo (fp,matriz);
fclose(fp);


}
