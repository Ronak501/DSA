#include<stdio.h>
#include<string.h>

int length,i=0;

int rev(char string[30],int n){
    if(n==-1)
        return 0;
    else{
        printf("%c",string[n]);
        n--;
        return rev(string,n);
    }
}
void main()
{
    char string[30];
    printf("Enter Your String:");
    scanf("%s",&string);

    int n = strlen(string);
    printf("Reverse of String:");
    rev(string,n);
}