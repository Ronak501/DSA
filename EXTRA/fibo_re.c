#include<stdio.h>
int i, x=0, t1 = 0, t2 = 1;
int nextTerm;

int fibo(int n){
    
    nextTerm = t1 + t2;

    if(n==x){
        printf("."); 
        return 0;
    }
    else{
        printf(", %d", nextTerm); 
        t1 = t2;
        t2 = nextTerm;
        return fibo(n-1);
    }   
}
void main()
{
    int n;
    printf("Enter num:");
    scanf("%d",&n);

    printf("Fibonacci Series: %d, %d", t1, t2);
    fibo(n-2);
}