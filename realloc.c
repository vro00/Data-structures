#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i; 
    int *ptr = (int *)malloc(2*sizeof(int));
    if(ptr == NULL){
        printf("Memory not available");
        exit(1);
    }
    printf("Enter two numbers: \n");
    for(i=0; i<2; i++){
        scanf("%d", ptr + i);
    }
    ptr = (int *)realloc(ptr, 4*sizeof(int));
    if(ptr == NULL){
        printf("Memory not available");
        exit(1);
    }
    printf("Enter two more numbers: \n");
    for(i=2; i<4; i++){
        scanf("%d", ptr+i);
    }
    for(i=0; i<4; i++){
        printf("%d ", *(ptr + i));
    }
    return 0;
}