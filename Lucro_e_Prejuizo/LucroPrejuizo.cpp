//================================================================
// 			 O programa calcula e mostra o Lucro e Prejuizo
//						 de uma empresa
//            	Num periodo de 4 trimestres (1 ano)
//================================================================
 
//Bibliotecas
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

main()
{
	//Entradas
	float rb, rl, dl, sal, alug, supr, propag, div, media;
	int cont;
	int acumulapt, acumulalm, acumulalt, acumulatri;
	char sit[20];
	
	cont=0;
	acumulapt=0;
	acumulalm=0;
	acumulalt=0;
	acumulatri=0;	

	while(cont<=4){
		printf("\n +---------------------------------+");
		printf("\n Informe a receita bruta no trimestre:");
		scanf ("%f",&rb);
		printf("\n Informe as despesas liquidas no trimestre:");
		scanf ("%f",&dl);
		printf("\n Informe o valor do salario:");
		scanf ("%f",&sal);
		printf("\n Informe os alugueis (caso não tenha, digite 0):");
		scanf ("%f",&alug);
		printf("\n Informe os suprimentos:");
		scanf ("%f",&supr);
		printf("\n Informe as propagandas:");
		scanf ("%f",&propag);
		printf("\n Informe os gastos diversos:");
		scanf ("%f",&div);
		
		cont=(cont+1);

	//calculos
	dl=(sal+alug+propag+div+supr);
	
	rl=(rb-dl);
	 
		 if(rl<=100.00){
				acumulapt=(acumulapt+1);
			 }
		 else
		 if (rl<=500.00){
				acumulalm=(acumulalm+1);
			 }
		 else
		 {
			acumulalt=(acumulalt+1);
			 }
		
		}
	printf("\n +---------------------------------+");
	printf("\n Quantos trimestres tiveram prejuizo total: %.2i",acumulapt);
	printf("\n Quantos trimestres tiveram lucro medio: %.2i",acumulalm);
	printf("\n Quantos trimestres tiveram lucro total: %.2i",acumulalt);

	
}
