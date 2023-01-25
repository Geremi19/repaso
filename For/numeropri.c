#include <stdio.h>

int main(){
    int i,numero, cont;
    printf("Digite un numero:");
    scanf("%i",&numero);

    for ( i = 1; i < numero; i++){  
        if (numero%i==0){
            cont = cont + 1;
        }
        
    }if (cont>2){
        printf("El numero es compuesto");
    }else{
        printf("El numero es primo");
    }
    
    


    return 0;
}