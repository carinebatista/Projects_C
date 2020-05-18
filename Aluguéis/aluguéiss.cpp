#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

 main()
 {
 
    int cod,contg;
	float permeses, valluguel,acumvalal,acumperme,acumcasa,acumap,acumcha,acumoutros,medal;
	
	char nomeimb[40], nomearr[40], tip[40];
	
	contg=0;
	acumvalal=0;
	acumperme=0;
	acumcasa=0;
	acumap=0;
	acumcha=0;
	acumoutros=0;
	
	
	do
	{
		printf("\n +---------------------------------+");
		
		printf("\n Digite o numero da imobiliaria :");
	
		scanf("%i",&cod);
		printf("\n Para encerrar, digite 0 :");
		printf("\n +---------------------------------+");
		
		if(cod==0)
		{
			printf("\n +---------------------------------+");
			medal=acumvalal/acumperme;
			printf("\n A contagem de execução e:%i",contg);
			printf("\n A contagem de casa e:%.2f",acumcasa);
			printf("\n A contagem de apartamento e:%.2f",acumap);
			printf("\n A contagem de chacara e:%.2f",acumcha);
			printf("\n A contagem de outros e:%.2f",acumoutros);
			printf("\n O valor acumulado do aluguel e:%.2f",acumvalal);
			printf("\n O valor acumulado do periodo em meses é:%.2f",acumperme);
			printf("\n A media acumulada é:%.2f",medal);
	        printf("\n +---------------------------------+");
		
		}
		
		else
		{
			printf("\n +---------------------------------+");
			printf("\n Entre como o nome da imobiliaria:");
			scanf("%s",&nomeimb);
			printf("\n Entre com o tipo do imovel:");
			scanf("%s",&tip);
			printf("\n Entre com o valor do aluguel:");
			scanf("%f",&valluguel);
			printf("\n Entre com  o nome do arrendatario:");
			scanf("%s",&nomearr);
			printf("\n Entre com o periodo em meses do contrato: ");
			scanf("%f",&permeses);
			printf("\n +---------------------------------+");
			
			contg=contg+1;
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
		while(cod!=0);
		getch();
	    }
	
