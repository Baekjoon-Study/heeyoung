#include <stdio.h>
#include <string.h>
#define stack_size 10001

int high = -1;
int stack[stack_size];

//push X: 정수 X 를 스택에 넣는 연산
void push(int x)
{
    high ++;
    stack[high] = x;
}

//empty: 스택이 비어있는지 판단, 비어있다면 1 출력
int empty()
{
    if (high == -1)
        return 1;
    else
        return 0;
}

//pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력
int pop()
{
    if (empty())
    {
        return -1;
    }
    else
    {
        return stack[high--];
    }
}

//top: 스택에서 가장 위에 있는 정수 출력
int top()
{
    if (empty())
    {
        return -1;
    }
    else
    {
        return stack[high];
    }
}

int main()
{
    int N = 0, push_data = 0;
    char command[5] = {0, };

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", command);
        if (!strcmp(command, "push"))
        {
            scanf("%d", &push_data);
            push(push_data);
        }
        else if (!strcmp(command, "pop"))
        {
            printf("%d\n", pop());
        }
        else if (!strcmp(command, "empty"))
        {
            printf("%d\n", empty());
        }
        else if (!strcmp(command, "size"))
        {
            printf("%d\n", high+1);
        }
        else if (!strcmp(command, "top"))
        {
            printf("%d\n", top());
        }
    }
    return 0;
}