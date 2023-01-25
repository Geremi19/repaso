#include <stdio.h>
#include <stdlib.h>

/*Busqueda secuencial*/
int busquedaSecuencial (int Vector[],int dato);

int main(int argc, char * argv[]){
    int Vector[]={1,9,3,4,5,6,8,7,0};
    int x,resu;
    printf("Ingrese un numero del 0 al 9:");
    scanf("%d",&x);
    resu=busquedaSecuencial(Vector,x);
    if (resu!=-1){
        printf("El valor %d el valor ingresado esta en la posicion %d \n",x);
    }else{
        printf("El valor %d no se encontro en el vector.\n",x);
    }
    system("pause");
    return 0;
}

//definicion de la funcion
int busquedaSecuencial (int Vector[],int dato){
    int i;
    for ( i = 0; i < 10; i++){
        if (Vector[i]==dato){
            return i;
        }
    }
    return -1;
    
}
