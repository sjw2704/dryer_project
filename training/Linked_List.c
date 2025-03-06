//SLL 구현하기
 /*
 구현해야할 함수들
 1.add_to_SLL
 2.print_SLL
 3.delete_SLL => 전체를 삭제함 
 4.remove_from_SLL
 5.insert_into_SLL => 원하는 위치에 요소를 집어 넣음
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//리스트의 기본 자료형 선언
typedef struct
{
    int element;
    int *next;
}node;

//리스트의 처음(머리)를 저장하는 메모리박스
node *head = 0;

// 1.리스트에 요소를 추가하는 함수
void add_to_SLL(int _e)
{
    node *new_one = (node*)malloc(sizeof(node));
    new_one -> element = _e;
    new_one -> next = 0;

    //만약 헤드가 비어있으면 처음 머리를 지정해줌.
    if(head == 0){
        head = new_one;
        return;
    }
    else{
        node *tmp = head;
        while(tmp -> next != 0)
        {
            tmp = tmp -> next;
        }
        tmp -> next = new_one;
        return;
    }
}

// 2.SLL을 출력하는 함수
void print_SLL()
{
    node *tmp = head;
    int i = 0;
    while(1)
    {
        printf("element_%d : %d.\n",i,tmp->element);
        if((tmp -> next) == 0) break;
        tmp = tmp -> next;
        i++;
    }
    return;
}

int main(void) {

	add_to_SLL(10);
	add_to_SLL(20);
	add_to_SLL(30);

	print_SLL();  // ==> 10, 20, 30

	//delete/_SLL();

	return 0;
}

