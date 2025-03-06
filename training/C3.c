
#include <stdio.h>
#include <stdlib.h>
#define MAX 4


typedef struct info{
    int student_num;
    char student_name[21];

}info;

typedef struct _class{
    info *student;  /// 이곳에서 info의 배열을 선언하는것이 아닌 포인터로 만들고 --- 함수부분(main/사용자지정)에서 info의 배열을 선언하여 사용가능
                        /// 그럴 경우 학생들의 정보가 입력되고 반의 이름이 정해져도 info포인터의 변경만으로 반과 학생들을 바꿀 수 있음
    int class_num;
    char class_name[21];
}_class;



info* setup_info(){
    
    info *_new_info = (info*)malloc(sizeof(info)*MAX);
    
    printf("%d명의 정보를 입력해주세요\n",MAX);
    for(int i = 0 ; i<MAX;   i++){
        printf("학생번호를 입력해주세요\n");
        scanf("%d", &( (_new_info+i)-> student_num)   );// _new_info의 옆에 i번째의 주소를통해서 맴버로 접근한다 그리고 그 값의 주소갑에 %d로 값을 넣는다.
        printf("학생의 이름을 입력해주세요\n");
        scanf("%s",&(_new_info+i)-> student_name);  // _new_info의 옆에 i번째의 주소를통해서 맴버로 접근한다 그리고 그 값에(이미 주소값임) %s를 넣는다.
    }

    

    return _new_info;
} 



int main(){

    _class Aclass;
    printf("반의 이름을 입력해주세요\n");
    scanf("%s",Aclass.class_name);
    info *Ainfo = setup_info();
    Aclass.student = Ainfo;



    _class Bclass;
    printf("반의 이름을 입력해주세요\n");
    scanf("%s",Bclass.class_name);
    info *Binfo = setup_info();
    Bclass.student = Binfo;
////////////////////////////////////////// 위의 단계또한 포인터를 통해 함수로 만들 수 있음.


printf("---------\n");    
    printf("%s반의 정보입니다.\n",Aclass.class_name);
    for(int i = 0 ; i < MAX; i++){
      printf("%d번의 이름은 == ",  (Aclass.student+i)->student_num );//  Aclass의 (info포인터자료형)맴버의 +i칸 옆으로가서 그 주소값을 통해서 맴버로 접근한다
      printf("%s\n",&(Aclass.student+i)->student_name);  
    }
    
printf("---------\n");
    printf("%s반의 정보입니다.\n",Bclass.class_name);
    for(int i = 0 ; i < MAX; i++){
      printf("%d번의 이름은 == ",  Bclass.student[i].student_num);// Bclass의 (info포인터자료형)멤버의 i번째를 참조하여 바로 맴버로 접근한다.
      printf("%s\n",Bclass.student[i].student_name);  
    }
  
 
////////////////////////////////////////// 이것두 함수로 가능



///////////////////////////////swap
info *swap_temp= Aclass.student;
Aclass.student = Bclass.student;
Bclass.student = swap_temp;

//////////////////////////////똑같이 출력하면 반 정보는 놔두고 학생들만 스왑가능
printf("---------\n");    
    printf("%s반의 정보입니다.\n",Aclass.class_name);
    for(int i = 0 ; i < MAX; i++){
      printf("%d번의 이름은 == ",  (Aclass.student + i)->student_num );//  Aclass의 (info포인터자료형)맴버의 +i칸 옆으로가서 그 주소값을 통해서 맴버로 접근한다
      printf("%s\n",&(Aclass.student+i)->student_name);  
    }
    
printf("---------\n");
    printf("%s반의 정보입니다.\n",Bclass.class_name);
    for(int i = 0 ; i < MAX; i++){
      printf("%d번의 이름은 == ",  Bclass.student[i].student_num);// Bclass의 (info포인터자료형)멤버의 i번째를 참조하여 바로 맴버로 접근한다.
      printf("%s\n",Bclass.student[i].student_name);  
    }





free(Aclass.student);
free(Bclass.student);

}