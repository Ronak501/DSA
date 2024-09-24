#include<stdio.h>
int length,i=0;

int len(char string[30]){
    if(string[i]=='\0')
        return length;
    else{
        length++;
        i++;
        return len(string);
    }
}
void main()
{
    char string[30];
    printf("Enter Your String:");
    scanf("%s",&string);

    printf("Length of String: %d.",len(string));
}