#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

 main()
 {
 
    int id,contid;
	float permeses, valluguel,acumvalal,acumperme,acumcasa,acumap,acumcha,acumoutros,medal;
	
	char nomeimb[40], nomearr[40], tip[40];
	
	contid=0;
	acumvalal=0;
	acumperme=0;
	acumcasa=0;
	acumap=0;
	acumcha=0;
	acumoutros=0;
	
	
	do
	{
		printf("\n +---------------------------------+");
		printf("\n Seja bem vindo! (Para encerrar, digite 0)");	
		printf("\n Por favor, Digite o numero da imobiliaria a ser cadastrado:");
		scanf("%i",&id);
		printf("\n +---------------------------------+");
		
		if(id==0)
		{
			printf("\n +---------------------------------+");
			medal=acumvalal/acumperme;
			printf("\n Numero de Imobiliarias cadastradas: %i",contid);
			printf("\n O numero de casas cadastradas:  %.2f",acumcasa);
			printf("\n Numero de apartamentos cadastrados: %.2f",acumap);
			printf("\n Numero de chcara cadastradas: %.2f",acumcha);
			printf("\n Numero de (Outros) cadastrados: %.2f",acumoutros);
			printf("\n O valor de aluguel acumulado: %.2f",acumvalal);
			printf("\n O valor acumulado do periodo em meses: %.2f",acumperme);
	        printf("\n +---------------------------------+");
		
		}
		
		else
		{
			printf("\n +---------------------------------+");
			printf("\n Entre como o nome da imobiliaria:");
			scanf("%s",&nomeimb);
			printf("\n Entre com o tipo do imovel: (Casa, apartamento ou Chacara)");
			scanf("%s",&tip);
			printf("\n Entre com o valor do aluguel: ");
			scanf("%f",&valluguel);
			printf("\n Entre com  o nome do arrendatario: ");
			scanf("%s",&nomearr);
			printf("\n Entre com o periodo em meses do contrato: ");
			scanf("%f",&permeses);
			printf("\n +---------------------------------+");
			
			contid=contid+1;
			if(strcmp("casa",tip)==0)
			{
				acumcasa=acumcasa+1;
			}
			else
			if(strcmp("apartamento",tip)==0)
			{
				acumap=acumap+1;
			}
           	else
              if(strcmp("chacara",tip)==0)
             {
	          acumcha=acumcha+1;
         	}
	        else
         	{
   		acumoutros=acumoutros+1;
       	}
	
	    acumvalal=acumvalal+valluguel;
	    acumperme=acumperme+permeses;
			
		}
	    }
		while(id!=0);
		getch();
	    }
	
