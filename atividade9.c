#include <stdio.h>

int main()
{
	float number1;
	int number2;
	
	printf("Digite um número de ponto flutuante: ");
	scanf("%f", &number1);
	printf("O número que voce digitou foi: %.2f \n", number1);
	number2 = (int)number1;
	printf("O numeró inteiro é: %d \n", number2);
	
	if(number2 >= 1 && number2 <2){
	    printf("Very Bad");
	} else if(number2 >= 2 && number2 <3){
   	    printf("Bad"); 
	}else if(number2 >= 3 && number2 <4){
   	    printf("Neutral"); 
	} else if(number2 >= 4 && number2 <5){
   	    printf("Good"); 
	} else if(number2 >= 5 && number2 <6){
   	    printf("Very Good"); 
	}
	return 0;
}
