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

cont=0
acumulapt=0;
acumulalm=0;
acumulalt=0;
acumulatri=0;

while(cont<=4)
{
printf("/n Digite a receita bruta no trimestre:");
scanf ("%f,"&rb);
printf("/n Digite as despesas liquidas no trimestre:");
scanf ("%f,"&dl);
printf("/n Digite o salario:");
scanf ("%f,"&sal);
printf("/n Digite os alugueis:");
scanf ("%f,"&alug);
printf("/n Digite os suprimentos:");
scanf ("%f,"&supr);
printf("/n Digite as propagandas:");
scanf ("%f,"&propag);
printf("/n Digite diversos:");
scanf ("%f,"&div);

cont=(cont+1);

//calculos
dl=(sal+alug+propag+div+supr);

rl=(rb-dl);
 
 if (rl<=100.00)
 {
sit="Prejuízo Total";
acumulapt=(acumulapt+1);
 }
 else
 if (rl<=500.00)
 {
sit="Lucro Médio";
 acumulalm=(acumulalm+1);
 }
 else
 {
sit="Lucro Total";
acumulalt=(acumulalt+1);
 }
 media=(acumulatri/4);
}

printf("/n Quantos tiveram prejuizo total:%.2i",acumulapt);
printf("/n Quantos tiveram lucro medio:%.2i",acumulalm);
printf("/n Quantos tiveram lucro total:%.2i",acumulalt);
printf("/n Media dos 4 trimestres")
}
