#include <stdio.h>
int main()
{
	float studentAYear1 = 4.2;
	float studentAYear2 = 4.5;
	float studentAYear3 = 4.2;
	float studentAMedia;
	
	float studentBYear1 = 4.3;
	float studentBYear2 = 4.4;
	float studentBYear3 = 4.7;
	float studentBMedia;
	
	float studentCYear1 = 4.3;
	float studentCYear2 = 4.8;
	float studentCYear3 = 4.9;
	float studentCMedia;
	
	printf("--------------------------------------------------- \n");
	printf("Student name  1stYGrade  2ndYGrade  3rdYGrade  Avg \n");
	studentAMedia = (studentAYear1 + studentAYear2 + studentAYear3) / 3;
	printf("StudentA       %.2f     %.2f        %.2f      %.2f  \n", studentAYear1, studentAYear2, studentAYear3, studentAMedia);
	
	studentBMedia = (studentBYear1 + studentBYear2 + studentBYear3) / 3;
	printf("StudentB       %.2f     %.2f        %.2f      %.2f \n", studentBYear1, studentBYear2, studentBYear3, studentBMedia);
	
	studentCMedia = (studentCYear1 + studentCYear2 + studentCYear3) / 3;
	printf("StudentC       %.2f     %.2f        %.2f      %.2f \n", studentCYear1, studentCYear2, studentCYear3, studentCMedia);
	return 0;
}
