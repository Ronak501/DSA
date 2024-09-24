// 4. Perform program no. 2 and 3 using function.
#include<stdio.h>
#include<math.h>

void swap(int a,int b){
    
    int c;

    c=a;
    a=b;
    b=c;

    printf("Your Value of A:%d",a);
    printf("\n Your Value of B:%d",b);
}

void power(int a,int b){

    int i,ans=1;

    for ( i = 0; i < b; i++)
    {
        ans = a*ans;
    }

    printf("\nYour Value A raised B:%d",ans);
}

void main(){

    int a,b;

    printf("Enter Your Value A:");
    scanf("%d",&a);

    printf("Enter Your Value B:");
    scanf("%d",&b);

    swap(a,b);
    power(a,b);
    
}