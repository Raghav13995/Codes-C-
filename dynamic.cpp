#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   // use of malloc()
/*
    int *ptr;
    ptr=(int*)malloc(3*sizeof(int));
    for(int i=0;i<3;i++){
        printf("enter the value of %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
        for(int i=0;i<3;i++){
            printf("the value at %d of the array is %d\n",i,ptr[i]);
        }
*/
// use of calloc()

    // char *ptr;
    // ptr=(char*)calloc(4,sizeof(char));
    // for(int i=0;i<4;i++){
    //     printf("enter the value of %d of this array\n",i);
    //     scanf("%c",ptr[i]);
        
    // }
    //     for(int i=0;i<4;i++){
    //         printf("the value at %d of the array is %c\n",i,ptr[i]);
    //     }
 
/*
    int *ptr;
    ptr=(int*)malloc(3*sizeof(int));
    for(int i=0;i<3;i++){
        printf("the value at %d of the array is %d\n",i,ptr[i]);
        }
*/
/*
    int *ptr;
    ptr=(int*)calloc(3,sizeof(int));
    for(int i=0;i<3;i++){
        printf("the value at %d of the array is %d\n",i,ptr[i]);
        }
*/

  int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n ,  sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
       scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n",i, ptr[i]);
    }

    //Use of realloc
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr ,  n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n",i);
       scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is %d\n",i, ptr[i]);
    }
    free(ptr);

    return 0;
}