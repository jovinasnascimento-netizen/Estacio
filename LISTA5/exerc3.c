#include <stdio.h>
#include <stdio.h>
int main(){
    int opçao;
    float saldo = 0<1000;
    float deposito;
    
    do{
        
     printf("Digite a sua opçao entre os 3 \n");
    printf("1- Consultar Saldo \n ");
    printf("2- Depositar \n ");
    printf("3- sair \n ");
    scanf ("%d", &opçao);
  
    if(opçao==1){
        
         printf("Seu saldo atual e:%.2f",saldo);
    }
   if (opçao==2){
       printf("Digite o valor de deposito ");
       scanf("%f", &deposito);
       if(deposito>0){
           saldo= saldo+deposito;
           
       }
    }else {
        printf("Pedir emprestimo !\n");
        
    }
   
     } while (opçao!=0);
        printf("Progama encerrado!");
        return 0;
}