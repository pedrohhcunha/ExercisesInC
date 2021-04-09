#include <stdio.h>

int main(void) 
{
    int len;
    printf("Plese, write a positive number: ");
    scanf("%d", &len);
    int arr[len];
    arr[0] = 1;
    arr[1] = 1;
    printf("That are the %d number from Fibonnacci Sequence: \n", len);
    for(int i = 2; i<len; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    for(int i = 0; i<len; i++){
        printf("%d \n", arr[i]);
    }
    for(int i = 0; i<len; i++){
        if(arr[i]%2){
            printf("%d \n", arr[i]);
        }
    }
    for(int i = 0; i<len; i++){
        if(!(arr[i]%2)){
            printf("%d \n", arr[i]);
        }
    }
}
