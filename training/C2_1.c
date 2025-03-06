#include <stdio.h>
#include <stdlib.h>

    //받는 함수

    //공간을 만드는 함수

    //받는 함수

    //출력하는 함수

int main()
{
    int class_student;
    int *student_ID;

    printf("student_size :");
    scanf("%d",&class_student);

    student_ID = malloc(class_student*sizeof(int));

    for(int i = 0;i < class_student;i++)
    {
        printf("student_ID : %d\n",student_ID + i);
    }

    for(int i = 0;i < class_student;i++)
    {
        printf("*student_ID : %d\n",*(student_ID + i));
    }

    for(int i = 0;i < class_student;i++)
    {
        scanf("%d",(student_ID + i));
    }

    for(int i = 0;i < class_student;i++)
    {
        printf("*student_ID : %d\n",*(student_ID + i));
    }

    return 0;
} 