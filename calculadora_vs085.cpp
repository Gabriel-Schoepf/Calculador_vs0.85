//Bibliotecas;
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	
setlocale(LC_ALL, "Portuguese"); //Deixando o codigo em Português;

//Declarando Variaveis;

float n0,n1,resultado;
char c;
short loop = 0, a = '=';
short b = '.',r = ',';
  
  	printf("Menu de operações \n\n");
    printf("+ - Soma \n");
    printf("- - Subtracao \n");
    printf("/ - Divisao \n");
    printf("* - Multiplicacao \n");
    printf("= - Sair \n");
    printf(". - Apagar historico \n");
   // printf(", - Corrigir linha \n\n");
    
           printf("Digite o valor: \n");
            scanf("%f",&n0); 

   while(loop == 0)
{
   
inicio:

     printf("Digite a operação desejada \n");
    c = getch( );
     printf ("%c \n", c);
     
     /*
     if(c == r){
     	
 	system ("cls");
    printf("Menu de operações \n\n");
    printf("+ - Soma \n");
    printf("- - Subtracao \n");
    printf("/ - Divisao \n");
    printf("* - Multiplicacao \n");
    printf("= - Sair \n");
    printf(". - Apagar historico \n");
    printf(", - Corrigir linha \n\n");
    
    printf("Digite o valor: \n");  
    printf("%f \n",n0);
    printf("Digite a operação desejada \n");
    printf ("%c \n", c);
    printf("Digite o proximo valor: \n");
            scanf("%f",&n1);
    break;
	 }
     
*/
   if(c == a)
   {
    printf("resultado: %2.f", resultado);
    return 0; 
   }else if(c == b){
		system ("cls");
			printf("Digite o valor: \n");
    			scanf("%f",&n0); 
    break;
    }



    printf("Digite o proximo valor: \n");
            scanf("%f",&n1);

            
       switch (c){
	   


   case '+':
    resultado = (n0+n1);
    printf ("%f %c %f = %f \n\n",n0,c,n1,resultado);
    break;

    case '-':
    resultado = (n0-n1);
    printf ("%f %c %f = %f \n\n",n0,c,n1,resultado);
    break;

    case '*':
    resultado = (n0*n1);
    printf ("%f %c %f = %f \n\n",n0,c,n1,resultado);
    break;

    case '/':
    resultado = (n0/n1);
    printf ("%f %c %f = %f \n\n",n0,c,n1,resultado);
    break;
    
}

	
}
          n0 = resultado;


      goto inicio;

return 0;
}
