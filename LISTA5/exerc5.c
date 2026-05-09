#include <stdio.h>

int main(){
    int codigo;
    printf("Digite o codigo de acesso:");
    scanf("%d",&codigo);
    while(codigo!= 4321);
      printf("codigo: %d esta incorreto , digite novamente.\n",codigo);
      scanf("%d",&codigo);
      

      printf("ACESSO LIBERADO");
        return 0;
}

COM VERIFICAÇÃO 


#include <stdio.h>

int main() {

    int codigo;
    int verificacao;

    printf("Digite o codigo de acesso: ");
    scanf("%d", &codigo);

    while(codigo != 4321) {
        printf("Codigo %d esta incorreto, digite novamente.\n", codigo);
        scanf("%d", &codigo);
    }

    printf("Digite o codigo de verificacao: ");
    scanf("%d", &verificacao);

    while(verificacao != 10) {
        printf("ACESSO NEGADO\n");

        printf("Digite novamente: ");
        scanf("%d", &verificacao);
    }

    printf("ACESSO LIBERADO\n");

    return 0;
}