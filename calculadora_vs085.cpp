
#include <stdio.h> // Bibliotecas;
#include <conio.h> // Bibliotecas;
#include <locale.h> // Bibliotecas;
#include <stdlib.h> // Bibliotecas;

int main()
{
	
setlocale(LC_ALL, "Portuguese"); //Deixando o codigo em Português;

float n0,n1,resultado; //Declarando Variavel;
char c; //Declarando Variavel;
short loop = 0, a = '='; //Declarando Variavel;
short b = '.',r = ','; //Declarando Variavel;
  
    printf("Menu de operações \n\n"); //mostrando na tela 
    printf("+ - Soma \n"); //mostrando na tela 
    printf("- - Subtracao \n"); //mostrando na tela 
    printf("/ - Divisao \n"); //mostrando na tela 
    printf("* - Multiplicacao \n"); //mostrando na tela 
    printf("= - Sair \n"); //mostrando na tela 
    printf(". - Apagar historico \n"); //mostrando na tela 
	
  	 // printf(", - Corrigir linha \n\n"); operação comentada pois não alcançamos o obejetivo.
    
           printf("Digite o valor: \n");
            scanf("%f",&n0); 

   while(loop == 0) //iniciando loop.
{
   
inicio: // Declarando o local onde o codigo ira retornar atraves da função 'goto'

	   
     printf("Digite a operação desejada \n");
   	 c = getch( );
     printf ("%c \n", c);
     
	   ]
	   //Area comentada ,Função ','.
		   
     /************************************
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
     
***********************************************/
   if(c == a) // Função '='
   {
    printf("resultado: %2.f", resultado);
    return 0; 
	   
   }else if(c == b) //Função '.'
   {
	system ("cls");
    printf("Digite o valor: \n");
    	scanf("%f",&n0); 
    break;
    }



    printf("Digite o proximo valor: \n");
            scanf("%f",&n1);

            
       switch (c) //Declarando nossos calculos de acordo com o carecter inserido pelo usuario.
       {
	   
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
          n0 = resultado; //Declarando que nosso resultado será guardado na variavel n0.


      goto inicio; //Mandando noss codigo devolta para o local declarado.

return 0;
}
