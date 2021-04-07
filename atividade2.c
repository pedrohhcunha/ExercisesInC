#include <stdio.h>

int main()
{
	char zero = '0';
	int i = 1;
	for(i=1;i<=10;i++){
	    if(i == 10){
	        printf("'0' - '0' is: 0 \n");
	    } else {
	        printf("'%d' - '0' is: %d \n", i, i-0);  
	    };
	};

	return 0;
}
