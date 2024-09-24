// // Write a program to enter information (name, rollno, marks of three subjects m1, m2 and m3) of N number of students. Marks entered is out of 70.
// Create following functions :
// 1. void result() : To display result of each student (Pass/Fail) [passing marks is 23]
// 2. void result_rollno(int x) : To display result of student whose rollno is equal to x.
// 3. void result_name(char y[]) : To display result of student whose name is equal to y.
// 4. void high_per() : To display information of student who secures highest percentage.
// 5. void display(struct student s1) : To display information of student s1

#include<stdio.h>
#include<string.h>
#include<conio.h>

int n,i,j,c,x,avg[100],max;
char y[100];

struct student{
    int roll_no,m[3];
    char name[50];

}s[100];

void result(){
    for(i=1;i<n+1;i++){
        if(s[i].m[0] >= 23 && s[i].m[1] >= 23 && s[i].m[2] >= 23){
            printf("\nStudent %d is Pass\n",i);
        }else{
            printf("\nStudent %d is Fail\n",i);
        }
    }
}

void result_rollno(int x){
    for(i=1;i<n+1;i++){
        if(s[i].roll_no == x){
            if(s[i].m[0] >= 23 && s[i].m[1] >= 23 && s[i].m[2] >= 23){
                printf("\nStudent %d is Pass\n",x);
            }else{
                printf("\nStudent %d is Fail\n",x);
            }
        }
    }
}

void result_name(char z[]){
    for(i=1;i<n+1;i++){
        if(strcmp(s[i].name,z) == 0){
            if(s[i].m[0] >= 23 && s[i].m[1] >=23 && s[i].m[2] >=23){
                printf("\n%s is Pass",z);
            }else{
                printf("\n%s is Fail",z); 
            }
        }
    }
}

void high_per(){
    max = 0;
    for(i=1;i<n+1;i++){
        avg[i] = s[i].m[0] + s[i].m[0] + s[i].m[0];
    }
    for(j=1;j<n+1;j++){
        if(avg[j] > max){
            max = avg[j];
            x = j;
        }
    }
    printf("\n%s is Highest Percentage",s[x].name);
}

void display(struct student s[100]){
    for(i=1;i<n+1;i++)
    {
        printf("\nStudent %d name:%s",i,s[i].name);
        printf("\nStudent Roll No:%d",s[i].roll_no);
        for(j=0;j<3;j++)
        {
            printf("\nStudent Mark %d:%d\n",i,s[i].m[j]);
        }
    }
}

void main()
{
    printf("\nEnter Number of Student:");
    scanf("%d",&n);

    for(i=1;i<n+1;i++){
        printf("\nStudent :%d",i);
        printf("\nEnter your name:");
        scanf("%s",s[i].name);
        printf("\nEnter your Roll No:");
        scanf("%d",&s[i].roll_no);

        for(j=0;j<3;j++){
            printf("\nEnter your %d Mark:",j+1);
            scanf("%d",&s[i].m[j]);
        }
    }

    do{
        printf("\n**********************************************");
        printf("\n0.Exit");
        printf("\n1.All Result");
        printf("\n2.Result by Roll No");
        printf("\n3.Result by Name");
        printf("\n4.Highest Percentage");
        printf("\n5.Display");
        printf("\n**********************************************");

        printf("\nEnter Your Choice:");
        scanf("%d",&c);

        switch (c)
        {
        case 1:
            result();
            break;

        case 2:
            printf("Enter Roll No:");
            scanf("%d",&x);
            result_rollno(x);
            break;

        case 3:
            printf("Enter Name:");
            scanf("%s",y);
            result_name(y);
            break;

        case 4:
            high_per();
            break;

        case 5:
            display(s);
            break;
        }
    }while(c!=0);
}