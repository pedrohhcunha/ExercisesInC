#include <stdio.h>

int main(){
	float num1;
	float num2;
    float sum;
    float diference;
    float product;
    
    printf("Whrite the number 1: ");
    scanf("%f", &num1);
    printf("Whrite the number 1: ");
    scanf("%f", &num2);
    
    sum = num1 + num2;
    diference = num1 - num2;
    product = num1 * num2;
    printf("sum : %.2f \n", sum);
    printf("diference: %.2f \n", diference);
    printf("product: %.2f \n", product);
    
	return 0;
}
