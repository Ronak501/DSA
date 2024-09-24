#include<stdio.h>

void hanoi(int n,char s,char x,char d)
{
    if(n==1)
    {
        printf("Move disk 1 from %c to %c tower.\n",s,d);
    }
    else
    {
        hanoi(n-1,s,d,x);
        printf("Move disk %d from %c to %c tower.\n",n,s,d);
        hanoi(n-1,x,s,d);
    }
}
void main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Source Tower:A");
    printf("\nAuxiliary Tower:B");
    printf("\nDestined Tower:C\n");
    hanoi(n,'A','B','C');
}