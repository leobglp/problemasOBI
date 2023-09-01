#include <stdio.h>

int main(void){
    int qmensal, meses, consumo, disponivel = 0, i;
    scanf("%d%d", &qmensal, &meses);
    for(i=0; i<meses; i++){
        scanf("%d", &consumo);
        disponivel += qmensal - consumo;
    }
    printf("%d", disponivel+qmensal);
    return 0;
}