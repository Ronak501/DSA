#include <stdio.h>

struct student {
    int rollno;
    char name[50];
    float marks;
};

void search1(struct student[], int n, int x);
struct student search2(struct student[], int n, int x);
struct student* search3(struct student[], int n, int x);
void sort(struct student[], int n);

int main() {
    int n, x, i;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    struct student students[n];

    for (i = 0; i < n; i++) {
        printf("Enter roll number:");
        scanf("%d", &students[i].rollno);
        printf("Enter your name:");
        scanf("%s", students[i].name);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    printf("Enter roll number to search for: ");
    scanf("%d", &x);
    
    search1(students, n, x);
    
    struct student foundStudent = search2(students, n, x);
    printf("Student found by Search-2: \nRoll No: %d, \nName: %s, \nMarks: %.2f\n",
           foundStudent.rollno, foundStudent.name, foundStudent.marks);
    
    struct student *pStudent = search3(students, n, x);
    if (pStudent) {
        printf("Student found by Search-3: \nRoll No: %d, \nName: %s, \nMarks: %.2f\n",
               pStudent->rollno, pStudent->name, pStudent->marks);
    } else {
        printf("Student not found (search3).\n");
    }
    
    sort(students, n);
    
    printf("Sorted student list by roll number:\n");
    for (i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",
               students[i].rollno, students[i].name, students[i].marks);
    }
    return 0;
}

void search1(struct student students[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (students[i].rollno == x) {
            printf("Student found by Search-1: \nRoll No: %d, \nName: %s, \nMarks: %.2f\n",
                   students[i].rollno, students[i].name, students[i].marks);
            return;
        }
    }
    printf("Student not found (search1).\n");
}

struct student search2(struct student students[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (students[i].rollno == x) {
            return students[i];
        }
    }
}

struct student* search3(struct student students[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (students[i].rollno == x) {
            return &students[i];
        }
    }
    return NULL;
}

void sort(struct student students[], int n) {
    struct student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].rollno > students[j].rollno) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}