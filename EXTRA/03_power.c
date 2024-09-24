// Write a program that computes x raised to the power y.
#include<stdio.h>

void main(){

    int x,y,i,ans=1;

    printf("Enter Your Value x:");
    scanf("%d",&x);

    printf("Enter Your Value Y:");
    scanf("%d",&y);

    for ( i = 1; i < y; i++)
    {
        ans *= x*ans;
    }

    printf("Your Value X raised Y:%d",ans);
    
}