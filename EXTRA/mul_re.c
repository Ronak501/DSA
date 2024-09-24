#include<stdio.h>
int mul(int n1,int n2)
{
    if(n2!=0)
    {
        return n1+mul(n1,n2-1);
    }
    else return 0;    
}
void main()
{
    int n1,n2,ans;
    printf("Enter First num:");
    scanf("%d",&n1);
    printf("Enter Second num:");
    scanf("%d",&n2);
    ans=mul(n1,n2);
    printf("Ans is %d.",ans);
}