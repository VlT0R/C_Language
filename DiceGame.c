#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

 void nomes(char nome[40],char nome1[40],char nome2[40]){//função void para pegar os nomes dos jogadores
    int i,j=0;//variaveis inteiras

    for (i=0; i<2; i++)//cria um laço de repetição qye só para quando i = 2
    {

        j++;//auto-encrementa o j = j+1
        if(j==1) {//se j for igual a 1 realiza as ações abaixo
            system("color 1");//troca a cor dos textos do sistema para azul
        printf("\n Digite o nome do %do jogador : ",j);//exibe a mensagem entre aspas
        gets(nome);//pega a variavel nome quando j =1
        }
        if(j==2) {//se j for igual a 2 realiza as ações abaixo
            system("color 4");//troca a cor dos textos do sistema para vermelho
        printf("\n Digite o nome do %do jogador : ",j);//exibe a mensagem entre aspas
        gets(nome);//pega a variavel nome quano j =2
        }



        if(i==0){//se i for igual a 0 realiza as ações abaixo
            strcpy(nome1,nome);//copia o primeiro nome escrito para dentro de outra variavel
        }

        else if(i==1){//se i for igual a 1 realiza as ações abaixo
            strcpy(nome2,nome);//copia o segundo nome escrito para dentro de outra variavel
        }

    }

}


void rolagem(int *dados,char nome[40],char nome1[40],char nome2[40])//função void para gerar os valores do dado
{
int i,j=0;//variaveis inteiras
    srand(time(NULL));// ativa a biblioteca time.h
    for (i=0; i<2; i++)
    {
        j++;
    dados[i] = rand() % 6+1;//armazena em dados um numero aleatorio entre 1 e 6
    printf("\n %do - [%d] ", j,dados[i]);//exibe o codigo do dado e o valor gerado
     }

    if(dados[0]>dados[1]){//se o primeiro dado for maior que o segundo excuta as ações abaixo
            system("color 1");//troca a cor dos textos do sistema para azul
        printf("\n o jogador [%s] venceu com [%d] ",nome1,dados[0]);//exibe a mensagem de vitoria do 1° jogador
     }
     else if(dados[0]<dados[1]){//se o segundo dado for maior que o primeiro excuta as ações abaixo
         system("color 4");//troca a cor dos textos do sistema para vermelho
         printf("\n o jogador [%s] venceu com [%d] ",nome2,dados[1]);//exibe a mensagem de vitoria do 2° jogador
     }

     else if(dados[0]==dados[1]){//se os valores do dado forem iguais
            system("color E");//troca a cor dos textos do sistema para branco
         printf("\n os jogadores [%s] e [%s] empataram",nome1,nome2);//exibe a mensagem de empate entre os jogadores
     }
}






int main(void)//int main "documento principal"
{
    //criação das variaveis que serão utilizadas
    int i,j=0;
    int dados[5];
    char nome[40],aux[40];
    char nome1[40];
    char nome2[40];

    //chama a função nomes
     nomes(nome,nome1,nome2);
    //chama a função rolagem
     rolagem(dados,nome,nome1,nome2);

     return 0;
}
