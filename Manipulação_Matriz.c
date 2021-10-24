#include <stdio.h>
#include <math.h>

int main(void)
{
	int i,j,l,c,soma,maior,menor,lc,menorimpar,menorimparf,diagonal,diagonalsec,diagonalacima,media;
	int mat[10][10];
	float multcinco,mcinco,somaLate;
	float maiorZ, menorZ, igualZ;
	int maiorL,menorL,maiorC,menorC,somaProd;
	float mp, sp,versomal[10];

	printf("\n Entre com o numero de linhas : ");
	scanf("%d",&l);

	printf("\n Entre com o numero de colunas : ");
	scanf("%d",&c);

	/* Leitura dos dados*/

	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("\n [%d][%d] = ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}

	//impressão dos dados

	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("%d\t",mat[i][j]);

		}
		printf("\n");
	}

	//Item A

	soma =0;
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
		soma = soma + mat[i][j];

		}
	}
	printf(" \n A soma dos elementos da matriz = %d",soma);

	///Item B
	maior = mat[0][0];
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
		if (maior<mat[i][j])
		{
			maior = mat[i][j];
		}
		}
	}
	printf("\n O maior valor eh = %d",maior);

	//Item C
	menor = mat[0][0];
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
		if (menor>mat[i][j])
		{
			menor = mat[i][j];
		}
		}
	}

	printf("\n O menor valor eh = %d",menor);

	//Item D
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
		if (mat[i][j]>0)
		{
			maiorZ ++;
		}

		else if (mat[i][j]<0)
		{
			menorZ ++;
		}

		else if (mat[i][j]==0)
		{
			igualZ ++;
		}
		}
	}

	printf("\n elementos maiores que 0 eh %.2f%%",100.0*maiorZ/(l*c));
	printf("\n elementos menores que 0 eh %.2f%%",100.0*menorZ/(l*c));
	printf("\n elementos iguais a 0 eh %.2f%%",100.0*igualZ/(l*c));


	//Item E
	menorimparf = mat[0][0];
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
		if (mat[i][j]%2!=0)
		{
			menorimpar = mat[i][j];
		}

		if(menorimpar < menorimparf){
			menorimparf=menorimpar;
		}
		}
	}

	printf("\n menor elemento impar %d",menorimparf);
	//Item F

	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			if(l==c){
				if (mat[i] == mat[j])
		{
			diagonal+=mat[i][j];
		}

			}

		}
	}

	 if (l!=c) {
			printf("\n O numero de linhas e colunas nao sao iguais ");
		}

	if(l==c) {
		printf("\n soma da diagonal principal eh %d",diagonal);
	}

	//Item G

	if(l==c){
		for(i=0;i<l;i++){
		for(j=0;j<c;j++){
		if(i+j == l-1){
		diagonalsec+=mat[i][j];
		}
	}
	}printf("\n a media dos elementos da diagonal secundaria eh %d",diagonalsec/l);
}else if(l!=c) {
			printf("\n O numero de linhas e colunas nao sao iguais ");
		}

		mcinco = 0;
		multcinco =1;

		for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			if(mat[i][j]%5==0 && mat[i][j] != 0){
				multcinco = multcinco * mat[i][j];
				mcinco ++;

			}

		}
	}
	if(mcinco!=0) {
		multcinco=pow(multcinco,1.0/mcinco);
			printf("\n a média geometrica dos elementos multiplos de 5 eh  %.2f",multcinco);
	}
	else{
		printf("\n Nao ha multiplos de 5");
	}



			for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			if((i==0) || (i==l-1) || (j==0) || (j==c-1)){
				somaLate = somaLate + mat[i][j];
			}

			}
		}
	printf("\n a soma dos elementos laterais eh : %.2f",somaLate);

	somaProd=1;
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			if(!((i==0) || (i==l-1) || (j==0) || (j==c-1))){
				somaProd = somaProd * mat[i][j];
			}
		}
	}
	if(l>=3 && c>=3) {
	printf("\n o produto dos elementos internos eh : %d",somaProd);
	}
	else{
		printf("\n Noo ha elementos internos");
	}
mp=0;
sp=0;
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			mp=mp+mat[i][j] * (i+j+1);
			sp = sp + (i+j+1);

		}
	}
	mp = mp/sp;
	printf("\n A media ponderada = %.3f",mp);



	for(i=0;i<l;i++){
		versomal[i] = 0;
		for(j=0;j<c;j++){
		versomal[i] = versomal[i] + mat[i][j];
		}
	}

	for(i=0;i<l;i++){
		printf(" \n a soma da linha[%d] eh = %.2f",i,versomal[i]);
	}


	return 0;

}
