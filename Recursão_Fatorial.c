 #include<stdio.h>
 #include<stdlib.h>

 int fatorial(int n){
    if(n==0){
        return 1;
    }else{
    return n*fatorial(n-1);
    }

 }

 int main(){
    int r;

     printf("Digite o numero que deseja saber o fatorial : ");
     scanf("%d",&r);

    int x = fatorial(r);
    printf("Valor do fatorial eh %d",x);


 }
