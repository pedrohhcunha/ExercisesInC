#include <stdio.h>

int main () {
	float anota1;
	float anota2;
	float afreq;
	
	float bnota1;
	float bnota2;
	float bfreq;
	
	printf("Digite a nota 1 do aluno A: ");
	scanf("%f", &anota1);
	printf("Digite a nota 2 do aluno A: ");
	scanf("%f", &anota2);
	printf("Digite a frequencia do aluno A: ");
	scanf("%f", &afreq);
	
	printf("Digite a nota 1 do aluno B: ");
	scanf("%f", &bnota1);
	printf("Digite a nota 2 do aluno B: ");
	scanf("%f", &bnota2);
	printf("Digite a frequencia do aluno B: ");
	scanf("%f", &bfreq);
	
	printf("A media do aluno A foi: %f \n", (anota1 + anota2)/2);
	if((anota1 + anota2)/2 <= 7  || afreq <= 75){
		printf("Alunb REPROVADO \n");
	} else {
		printf("Alunb APROVADO \n");
	}
	printf("A media do aluno A foi: %f \n", (bnota1 + bnota2)/2);
		if((bnota1 + bnota2)/2 <= 7 || bfreq <= 75){
		printf("Aluno B REPROVADO \n");
	} else {
		printf("Aluno B APROVADO \n");
	}
	return 0;
}
