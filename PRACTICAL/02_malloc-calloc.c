#include <stdio.h>

#include <stdlib.h>

struct temp {};

int main() {
  int * ptr1, n1, i, op, n3;
  float * ptr2;
  int n2;
  struct temp * ptr3;

  printf("Options.\n");
  printf("1. malloc() and free().\n");
  printf("2. calloc() and free().\n");

  printf("Enter choice: ");
  scanf("%d", & op);

  switch (op) {
  case 1: {
    printf("----------------------------\n");
    printf("Enter number of elements of int datatype: ");
    scanf("%d", & n1);

    ptr1 = (int * ) malloc(n1 * sizeof(int));
    if (ptr1 == NULL) {
      printf("Memory not allocated.\n");
      exit(0);
    } else {
      printf("Memory successfully allocated for int datatype using malloc function.\n");
    }

    printf("----------------------------\n");
    printf("Enter number of elements of float datatype: ");
    scanf("%d", & n2);

    ptr2 = (float * ) malloc(n2 * sizeof(float));
    if (ptr2 == NULL) {
      printf("Memory not allocated.\n");
      exit(0);
    } else {
      printf("Memory successfully allocated for float datatype using malloc function.\n");
    }

    printf("----------------------------\n");
    printf("Enter elements:\n");
    for (i = 0; i < n1; ++i) {
      scanf("%d", ptr1 + i);
    }

    printf("----------------------------\n");
    printf("Elements of Array are:\n");
    for (i = 0; i < n1; ++i) {
      printf("%d", *(ptr1 + i));
      if (i != n1 - 1)
        printf(", ");
    }
    printf("\n----------------------------\n");

    printf("Enter number of elements of struct datatype: ");
    scanf("%d", & n3);

    ptr3 = (struct temp * ) malloc(n3 * sizeof(struct temp));
    if (ptr3 == NULL) {
      printf("Memory not allocated.\n");
      exit(0);
    } else {
      printf("Memory successfully allocated for struct datatype using malloc function.\n");
    }

    printf("----------------------------\n");
    free(ptr1);
    free(ptr2);
    free(ptr3);
    break;
  }

  case 2: {
    printf("----------------------------\n");
    printf("Enter number of elements of int datatype: ");
    scanf("%d", & n1);

    ptr1 = (int * ) calloc(n1, sizeof(int));
    if (ptr1 == NULL) {
      printf("Memory not allocated.\n");
      exit(0);
    } else {
      printf("Memory successfully allocated for int datatype using calloc function.\n");
    }

    printf("----------------------------\n");
    printf("Enter number of elements of float datatype: ");
    scanf("%d", & n2);

    ptr2 = (float * ) calloc(n2, sizeof(float));
    if (ptr2 == NULL) {
      printf("Memory not allocated.\n");
      exit(0);
    } else {
      printf("Memory successfully allocated for float datatype using calloc function.\n");
    }

    printf("----------------------------\n");
    printf("Enter elements:\n");
    for (i = 0; i < n1; ++i) {
      scanf("%d", ptr1 + i);
    }

    printf("----------------------------\n");
    printf("Elements of Array are:\n");
    for (i = 0; i < n1; ++i) {
      printf("%d", *(ptr1 + i));
      if (i != n1 - 1)
        printf(", ");
    }
    printf("\n----------------------------\n");

    printf("Enter number of elements of struct datatype: ");
    scanf("%d", & n3);

    ptr3 = (struct temp * ) calloc(n3, sizeof(struct temp));
    if (ptr3 == NULL) {
      printf("Memory not allocated.\n");
      exit(0);
    } else {
      printf("Memory successfully allocated for struct datatype using calloc function.\n");
    }

    printf("----------------------------\n");
    free(ptr1);
    free(ptr2);
    free(ptr3);
    break;
  }

  default: {
    printf("Invalid Input....\n");
    break;
  }
  }
  return 0;
}