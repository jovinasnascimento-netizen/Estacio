#include <stdio.h>

int main(){
    int i , status ;
    int concluidos= 0; int pendentes=0;
    for(i=1;i<8;i++){
        printf("Digite o status da %dª tarefa 1 para concluidos e 0 para pendentes ",i);
        scanf("%d", &status);
        if(status== 1){
            concluidos++;
        }else {
            pendentes++;
        }
    }
    printf("Atividade concluida : %d", concluidos);
    printf("Atividade pendentes : %d", pendentes);
    
        return 0;
}