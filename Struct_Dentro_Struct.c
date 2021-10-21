#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct idadenum{
        int idade, numero;
    };

struct pessoa{
    char nome[50],sobrenome[50];
    struct idadenum id;//chama a instrução para dentro
    };

int main(){

//cada campo/variavel da struct pode ser acessado usando "."
int n=0;


printf(" \n Digite a quantidade de pessoas a serem cadastradas : ");
scanf("%d",&n);

struct pessoa p[n];

int i =0;
for(i=0; i<n ; i++) {

    printf("\nDigite o seu Nome : ");
    scanf("%s",&p[i].nome);

    printf("\nDigite o seu Sobrenome : ");
    scanf("%s",&p[i].sobrenome);

    strcat(p[i].nome,p[i].sobrenome);// coloca o sobrenome dentro da string do nome

    printf("\n Digite o sua Idade : ");
    scanf("%d",&p[i].id.idade);//exibe o caminho de pessoa até a idade em outra struct

    printf("\n Digite o seu Numero : ");
    scanf("%d",&p[i].id.numero);


}

for(i=0; i<n ; i++) {
    printf(" \n %do - nome [%s] , idade [%d] , numero[%d]",i,p[i].nome,p[i].id.idade,p[i].id.numero);
}

}
