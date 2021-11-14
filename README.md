# Calculador_vs0.85
Calculadora versão085


Instale o Dev++; 
Sistema operacional windows; 
Desenvolvido em C 
Autor: Gabriel Schoepf
Data: 14-11-2021

//Declarando bibliotecas;
#include <stdio.h> // Bibliotecas;
#include <conio.h> // Bibliotecas;
#include <locale.h> // Bibliotecas;
#include <stdlib.h> // Bibliotecas;

//Iniciando função;
int main()
{
	
setlocale(LC_ALL, "Portuguese"); //Deixando o codigo em Português;

//Variaveis e seus tipos.
float n0,n1,resultado; //Declarando Variavel;
char c; //Declarando Variavel;
short loop = 0, a = '='; //Declarando Variavel;
short b = '.',r = ','; //Declarando Variavel;
  
  Printando na tela o menu de operações para o usuario se localizar.
  
    printf("Menu de operações \n\n"); //mostrando na tela 
    printf("+ - Soma \n"); //mostrando na tela 
    printf("- - Subtracao \n"); //mostrando na tela 
    printf("/ - Divisao \n"); //mostrando na tela 
    printf("* - Multiplicacao \n"); //mostrando na tela 
    printf("= - Sair \n"); //mostrando na tela 
    printf(". - Apagar historico \n"); //mostrando na tela 
  	 // printf(", - Corrigir linha \n\n"); operação comentada pois não alcançamos o obejetivo.
    
    pedindo para o usuario inserir os valores os valores, e os armazenando nas variaveis araves do scanf.
           printf("Digite o valor: \n"); //pedindo valores;
            scanf("%f",&n0); //Armazenando valores;

   while(loop == 0) //iniciando loop.
{
   
inicio: // Declarando o local onde o codigo ira retornar atraves da função 'goto'

	   
     printf("Digite a operação desejada \n");// pedindo valores;
   	 c = getch( ); // armazenando na variavel c atraves da função getch;
     printf ("%c \n", c); // mostrando na tela.
     
	   ]
	   //Area comentada ,Função ','.
     esta area esta comentada pois não consegui atingir o objetivo.
     o objetivo era criar um vetor, para que ficasse armazenado o valor 
     da operação em 'c' assim quando comparada com r = ','.
     caso c == r.( c = ,) o vetor teria armazenado por exemplo c = vet[1] por exemplo (vet = ['/,*,-,+'])
     o vetor deveria guardar a ultima operação, (antes de ',') e printala na tela depois.
     mas ao inves disto ele print a ','.
		   
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



    printf("Digite o proximo valor: \n"); //pedindo o valor
            scanf("%f",&n1); // armazenando o valor

            caso nossa operação c = (+,-,*,/) executara um calculo diferente.
      
      switch (c) //Declarando nossos calculos de acordo com o carecter inserido pelo usuario.



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


          n0 = resultado;
}

      goto inicio;

return 0;
}
