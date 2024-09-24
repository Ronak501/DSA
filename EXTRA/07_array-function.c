#include<stdio.h>
void maxi(int rk[100], int n){
    int max=1,i;

    for (i = 0; i < n; i++){
        if(max < rk[i]){
            max=rk[i];
        }
    }

    printf("Your Max Value:%d",max);
}

void main(){

    int i,rk[100],x,n;

    printf("Enter Your Value N:");
    scanf("%d",&n);


    for (i = 0; i < n; i++)
    {
        scanf("%d",&x);
        rk[i] = x;
    }

    maxi(rk, n);  
}