#include <stdio.h>

int main(void){
    int vitorias=0, i;
    char resultado;
    for(i=0; i<6; i++){
        scanf(" %c", &resultado);
        if(resultado == 'V'){
            vitorias++;
        }
    }
    if(vitorias>=5){
        printf("%d", 1);
    }else if(vitorias==3 || vitorias==4){
        printf("%d", 2);
    }else if(vitorias==1 || vitorias==2){
        printf("%d", 3);
    }else{
        printf("%d", -1);
    }
    return 0;
}