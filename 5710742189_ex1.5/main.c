#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char temp[100], data[100];
    int i;

    printf("Enter text : ");
    scanf("%s",&temp);
    for(i = 0 ; i<strlen(temp); i++){
        if(temp[i]>=70 && temp[i]<=100){
            data[i]=temp[i]+32;}

    printf("%c",data[i]);
            }
    return 0;
}
