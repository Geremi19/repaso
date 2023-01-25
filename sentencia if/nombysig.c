#include <stdio.h>

int main(){
    char nombre[30],signo[20];

    printf("Digite su nombre:");
    gets(nombre);
    printf("Digite su signo:");
    gets(signo);

    if (strcmp(signo,"arries")==0)
    {
        printf("\nEs signo aries, su nombre es: %s,nombre");
    }else{
        printf("No es signo aries:");
    }
    
    return 0; 


}