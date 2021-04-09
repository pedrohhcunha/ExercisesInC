#include <stdio.h>

int main()
{
    int year;
	printf("Digite um ano: ");
	scanf("%d", &year);
	
	if(!(year%100)){
	  if(!(year%400)){
	      printf("O ano %d é bissexto!", year);
	  } else {
	      printf("O ano %d não é bissexto!", year);
	  } 
	} else if(!(year%4)){
	    printf("O ano %d é bissexto!", year);
	} else {
	    printf("O ano %d não é bissexto!", year);
	}
	return 0;
}
