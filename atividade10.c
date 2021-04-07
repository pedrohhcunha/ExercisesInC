#include <stdio.h>

int main()
{
    int num1, num2, result;
    do{
        printf("Digite um numero: ");
        scanf("%d", &num1);
        printf("Digite outro numero: ");
	    scanf("%d", &num2);
	    result = num1 + num2;
	    printf("Result: %d \n", result);
    }while(num1 != 0 || num2 != 0);
	return 0;
}
