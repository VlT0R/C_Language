#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// l = 1
// V = 5
// x = 10
// L = 50
// C = 100
// D = 500
// M = 1000
int  main() {
int n=0;
int var1;
int var2;
int var3;
int var4;

printf("\nDigite um numero ente 1 e 3999 : ");
scanf("%d",&n);

var1 = (n/1000)*1000;
var2 = ((n/100)%10)*100;
var3 = ((n/10)%10)*10;
var4 = ((n/1)%10)*1;


if(n>=1.0 && n<=3999.0){

    printf("\nValor entre 1 e 3999\n\n");

    printf("\n\n N = [%d] = ",n);


    if (var1==1000)
    {
     printf("M");
    }else if (var1==2000){
        printf("MM");
    }else if (var1==3000){
        printf("MMM");
    }


    if(var2 == 100){
        printf("C");
    }else if(var2==200){
        printf("CC");
    }else if(var2==300){
        printf("CCC");
    }else if(var2==400){
        printf("CD");
    }else if(var2==500){
        printf("D");
    }else if(var2==600){
        printf("DC");
    }else if(var2==700){
        printf("DCC");
    }else if(var2==800){
        printf("DCCC");
    }else if(var2==900){
        printf("CM");
    }

    if(var3 == 10){
        printf("X");
    }else if(var3==20){
        printf("XX");
    }else if(var3==30){
        printf("XXX");
    }else if(var3==40){
        printf("XL");
    }else if(var3==50){
        printf("L");
    }else if(var3==60){
        printf("LX");
    }else if(var3==70){
        printf("LXX");
    }else if(var3==80){
        printf("LXXX");
    }else if(var3==90){
        printf("XC");
    }

    if(var4 == 1){
        printf("I");
    }else if(var4 == 2){
        printf("II");
    }else if(var4 == 3){
        printf("III");
    }else if(var4 == 4){
        printf("IV");
    }else if(var4 == 5){
        printf("V");
    }else if(var4 == 6){
        printf("VI");
    }else if(var4 == 7){
        printf("VII");
    }else if(var4 == 8){
        printf("VIII");
    }else if(var4 == 9){
        printf("IX");
    }




}
else{
        printf("\nValor Dado Incorreto");
    }
}