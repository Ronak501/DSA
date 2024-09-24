#include<stdio.h>
struct student{
    int roll_no,m[3];
    char name[50];

}s;

void main()
{
    int i;

        printf("\nEnter your name:");
        scanf("%s",s.name);
        printf("\nEnter your Roll No:");
        scanf("%d",&s.roll_no);

    for(i=0;i<3;i++){
        printf("\nEnter your Mark %d:",i+1);
        scanf("%d",&s.m[i]);
    }

    printf("\nYour name:%s",s.name);
    printf("\nYour Roll No:%d",s.roll_no);

    for(i=0;i<3;i++){
        printf("\nYour Mark %d:%d",i+1,s.m[i]);
    }
}