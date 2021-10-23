#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//o programa deve pegar o valor de 10 projetos,
//e realizar calculos para gerar o saldo final, 
//atraves da receita e despesa. (utilizando Struct)

struct projetos{
    char nome[50];char tipo;float valor;
    float saldo;
};

int main(){
    int i =0;
    struct projetos p[i];




    for(i=0;i<9;i++){
        printf("\n[%d] - Digite o nome do projeto : ",i);
        scanf("%s",&p[i].nome);

        printf("\n[%d] - Digite o valor do projeto : ",i);
        scanf("%f",&p[i].valor);

        printf("\n[%d] - Digite R - receita e D - Despesa : ",i);
        scanf("%s",&p[1].tipo);

        if(p[1].tipo == 'r' || p[1].tipo == 'R'){
            printf("\n[%d] - Digite a quantidade de Saldo da Receita : ",i);
            scanf("%f",&p[i].saldo);

            p[i].saldo += p[i].valor;
            printf("\n Projeto - [%d] \n Nome[%s] \n Tipo[Receita] \n Valor[%.2f] \n Saldo [%.2f]",i,p[i].nome,p[i].valor,p[i].saldo);

        }else if(p[1].tipo == 'd' || p[1].tipo == 'D'){
            printf("\n[%d] - Digite a quantidade de Saldo da Despesa : ",i);
            scanf("%f",&p[i].saldo);
            p[i].saldo -= p[i].valor;
            printf("\n Projeto - [%d] \n Nome[%s] \n Tipo[Despesa] \n Valor[%.2f] \n Saldo [%.2f]",i,p[i].nome,p[i].valor,p[i].saldo);
        }else{
            printf(" \nTipo de despesa invalido!!!");
            }

        }

}


