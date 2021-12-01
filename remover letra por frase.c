
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

char frase[100], retirar,fraseSem[100];
int i,tam;

printf("\n Digite a frase : ");
gets(frase);

tam=strlen(frase);

printf("\n Digite a letra que deseja retirar da frase : ");
scanf("%c",&retirar);

i=0;


      for(i=0; i<strlen(frase);i++){

        if (frase[i]==retirar) {
                 frase[i+1]= frase[i-1];
                 frase[i+2] = frase[i-1];



      }

  }

printf("\n %s ",frase);

}
