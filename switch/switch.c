/*sentencia switch()
switch (selector){

case etiqueta1 : sentencias1;break;
case etiqueta2 : sentencias2;break;
case etiqueta3 : sentencias3;break;
default: sentencias;
}*/

//ejemplo del numero
#include <stdio.h>

int main(){
    char vocal;
    printf("Digite un numero entre (1-3):");
    scanf("%c",&vocal);

    switch (vocal){
    case 'a': printf("\nVocal a");
    break;
    case 'e': printf("\nVocal e");
    break;
    case 'i': printf("\n vocal i");
    break;
    case 'o': printf("\n vocal o");
    break;
    case 'u': printf("\n vocal u");
    break;
    
    default: printf("Se equivoco, no es una vocal");
        break;
    }



    return 0;
}


    /*case 1: printf("Es el numero 1");
    break;
    case 2: printf("Es el numero 2");
    break;
    case 3: printf("Es el numero 3");
    break;
    default: printf("No se a digitado un numero correcto");
        break;*/