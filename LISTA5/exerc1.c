#include <stdio.h>

int main() {
    int i , codigo = 0;
    int validos = 0;
    int invalidos = 0;
    for (i=1;i<=10;i++){
        printf("Digite o %d° codigo:", i);
        scanf("%d",&codigo);
        if((codigo>=1000) && (codigo<=9999)){
         validos++;
        }else {
            invalidos++;
        }
    }
        
        printf("Codigos validos:%d/n",validos);
        printf("Codigos validos:%d/n",invalidos);
    return 0;
}