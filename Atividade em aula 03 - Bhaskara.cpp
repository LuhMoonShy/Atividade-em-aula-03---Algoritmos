//Entrada: a, b, c
//Saída: x1, x2
//Processamento: calculo
#include<stdio.h>//Biblioteca pra comandos de entraada e saída
#include<math.h>//Biblioteca matemática
#include<locale.h> //biblioteca para acentos
int main(){//inicio do algoritmo

	//perguntar os valores das variaveis

	double a, b, c, delta, x1, x2;//variaveis  
	
	printf("Digite o valor de a: "); //printf exibe a mensagem da variavel desejada na tela
	scanf("%lf", &a);//%lf codico de formatação 
	printf("Digite o valor de b: "); //printf exibe a mensagem da variavel desejada na tela
	scanf("%lf", &b);//%lf codico de formatação
	printf("Digite o valor de c: "); //printf exibe a mensagem da variavel desejada na tela
	scanf("%lf", &c); //%lf codico de formatação
	
	delta = (pow(b,2) - 4*a*c); //calculo de delta ,pow(b,x) calcula potencias 
	
	//definir condiçoes 
	
	 if(a == 0 or delta < 0) 
	 {
		 printf("Impossivel calcular!");
	}
	  else(calcule) 
   { 
    	  x1 = (-(b) + sqrt(delta) / (2*a)); //Formula para x1 , sqrt(x) calcula raizes
    	  x2 = (-(b) - sqrt(delta) / (2*a)); //Formula para x2 , sqrt(x) calcula raizes
   	}

	printf("x1 = %.5lf\nx2 = %.5lf\n", x1, x2); //exibe o resultado do calculo 
	
	return 0;//retoma para função main
}//final do algoritmo
