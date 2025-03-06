//buildup1
// #include <stdio.h>
// #include <stdlib.h>

// int *module_participant(int student_count)
// {
//     return malloc(student_count*sizeof(int));
// }

// int main()
// {
//     int student_number;
//     int *class_participant;

//     printf("student_size :");
//     scanf("%d",&student_number);

//     class_participant = module_participant(student_number);

//     for(int i = 0;i < student_number;i++)
//     {
//         printf("student address : %d\n", class_participant + i);
//     }

//     printf("\n");
//     for(int i = 0;i < student_number;i++)
//     {
//         printf("student id : %d\n", *(class_participant + i));
//     }

//     printf("\n");
//     for(int i = 0;i < student_number;i++)
//     {
//         printf("student_%d\n",i);
//         scanf("%d",class_participant + i);
//     }

//     printf("\n");
//     for(int i = 0;i < student_number;i++)
//     {
//         printf("student id : %d\n", *(class_participant + i));
//     }
    

//     return 0;
// } 

//=========================================================

// //buildup2

// #include <stdio.h>
// #include <stdlib.h>

// int *module_A(int student_count)
// {
//     return malloc(student_count*sizeof(int));
// }

// int *module_B(int student_count)
// {
//     return calloc(student_count,sizeof(int));
// }

// int main()
// {
//     int student_number_A;
//     int student_number_B;
//     int *class_A;
//     int *class_B;

//     printf("student_number_A :");
//     scanf("%d",&student_number_A);

//     printf("student_number_B :");
//     scanf("%d",&student_number_B);
    
//     //배열 할당
//     class_A = module_A(student_number_A);
//     class_B = module_B(student_number_B);

//     //방 주소와 값 확인
//     for(int i = 0;i < student_number_A;i++)
//     {
//         printf("student_A address : %d\n", class_A + i);
//         printf("student_A ID : %d\n", *(class_A + i));
//     }

//     for(int i = 0;i < student_number_B;i++)
//     {
//         printf("student_B address : %d\n", class_B + i);
//         printf("student_B ID : %d\n", *(class_B + i));
//     }
    
//     //입력
    // for(int i = 0;i < student_number_A;i++)
    // {
    //     printf("student_number_A : ");
    //     scanf("%d",class_A + i);
    // }

//     for(int i = 0;i < student_number_B;i++)
//     {
//         printf("student_number_B : ");
//         scanf("%d",class_B + i);
//     }

//     //최종확인
//     for(int i = 0;i < student_number_A;i++)
//     {
//         printf("student ID : %d\n", *(class_A + i));
//     }

//     for(int i = 0;i < student_number_B;i++)
//     {
//         printf("student ID : %d\n", *(class_B + i));
//     }

//     return 0;
// } 

//=========================================================

// //buildup3

// #include <stdio.h>
// #include <stdlib.h>

// int count;//class를 구분하는 변수

// int *module_A(int student_count)
// {
//     return malloc(student_count*sizeof(int));
// }

// int *module_B(int student_count)
// {
//     return calloc(student_count,sizeof(int));
// }

// void set_up(int* student_count)
// {
//     printf("student_%c : ",'A'+count);
//     scanf("%d",student_count);
//     count++;
// }

// void ID_check(int *class,int student_count)
// {
//     for(int i = 0;i < student_count;i++)
//     {
//         printf("student_%c ID : %d\n",('A'+count), *(class + i));
//     }
//     count++;
// }

// void Set_ID(int *class,int student_count)
// {
//     for(int i = 0;i < student_count;i++)
//     {
//         printf("student_number_%c_%d : ",'A'+count,i);
//         scanf("%d",class + i);
//     }
//     count++;
// }

// int main()
// {
//     int student_number_A;
//     int student_number_B;
//     int *class_A;
//     int *class_B;

//     //학생 수 입력
//     set_up(&student_number_A);
//     set_up(&student_number_B);
    
//     //배열 할당
//     class_A = module_A(student_number_A);
//     class_B = module_B(student_number_B);

//     //ID check
//     count = 0;
//     ID_check(class_A,student_number_A);
//     ID_check(class_B,student_number_B);
    
//     //입력
//     count = 0;
//     Set_ID(class_A,student_number_A);
//     Set_ID(class_B,student_number_B);

//     //최종확인
//     count = 0;
//     ID_check(class_A,student_number_A);
//     ID_check(class_B,student_number_B);

//     return 0;
// } 

//=========================================================

//buildup4

#include <stdio.h>
#include <stdlib.h>

int count;//class를 구분하는 변수

int *module_A(int* student_count)
{
    printf("student_number_A : ");
    scanf("%d",student_count);
    return malloc(*student_count*sizeof(int));
}

int *module_B(int* student_count)
{
    printf("student_number_B : ");
    scanf("%d",student_count);
    return calloc(*student_count,sizeof(int));
}

void ID_check(int *class,int student_count)
{
    for(int i = 0;i < student_count;i++)
    {
        printf("student_%c ID : %d\n",('A'+count), *(class + i));
    }
    count++;
}

void Set_ID(int *class,int student_count)
{
    for(int i = 0;i < student_count;i++)
    {
        printf("student_number_%c_%d : ",'A'+count,i);
        scanf("%d",class + i);
    }
    count++;
}

int main()
{
    int student_number_A;
    int student_number_B;
    int *class_A;
    int *class_B;
    
    //배열 할당
    class_A = module_A(&student_number_A);
    class_B = module_B(&student_number_B);

    //ID check
    count = 0;
    ID_check(class_A,student_number_A);
    ID_check(class_B,student_number_B);
    
    //입력
    count = 0;
    Set_ID(class_A,student_number_A);
    Set_ID(class_B,student_number_B);

    //최종확인
    count = 0;
    ID_check(class_A,student_number_A);
    ID_check(class_B,student_number_B);

    return 0;
} 