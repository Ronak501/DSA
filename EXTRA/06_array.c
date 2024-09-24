#include<stdio.h>

void main(){

    int n,rk[100],x,i,max=1;

    printf("Enter Your Value N:");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        scanf("%d",&x);
        rk[i] = x;
    }

    for (i = 0; i < n; i++){
        if(max < rk[i]){
            max=rk[i];
        }
    }

    printf("Your Max Value:%d",max);
}