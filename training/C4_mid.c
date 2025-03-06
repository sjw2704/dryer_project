//데이터구조 중간고사 준비 (온라인 저지)
//1163번

/*
양수 또는  0이 push되면 스택에 저장하고,
음수가 push되면 스택에 있는 모든 숫자들을 pop한 후 
더한 합을 push하는 프로그램을 작성하시오. 
예를 들어 다음과 같은 순서로 push되면, 1 2 3 -9 4 -1 5, 
스택에 저장되는 값은 아래와 같아야 한다. 
5 (스택의 맨 위)
10 (스택의 바닥)

주의1 : 모든 push 숫자가 음수인 경우에 답은 0이 되어야 한다. 
주의2: 모든 push 숫자가 0인 경우에는  push횟수만큼 0이 출력되어야 한다.
*/

/*
입력예시

7
1 2 3 -9 4 -1 5
*/

#include <stdio.h>
# define MAX 100

//기본 자료구조
typedef struct stack
{
    int top;
    int data[MAX];
}stack;

//초기화 함수
void init(stack *s)
{
    s->top == -1;
}
//empty 함수
int empty(stack *s)
{
    if(s->top == -1) return 1;
    else return 0;
}
//full 함수
int full(stack *s)
{
    if(s->top == MAX-1) return 1;
    else return 0;
}
//push 함수
void push(stack *s,int item)
{
    if(!full(s))
    {
        if(item >= 0)
        {
            s->data[s->top] = item;
            s->top++;
        }
        else if(empty(s))
        {
            s->data[s->top] = 0;
        }
        else
        {
            int sum;
            while(s->top != -1)
            {
                sum += s->data[s->top];
                s->top--;
            }
            s->top = 0;
            s->data[s->top] = sum;
            s->top++;
        }
    }
    return;
}
//pop 함수
void pop(stack *s)
{
    
}

int main()
{
    stack stk;
    init(&stk);

    
    return 0;
}