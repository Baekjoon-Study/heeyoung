
#include <stdio.h>
#include <string.h>

typedef struct Queue {
    int data[2000001];
    int front;
    int rear;
} Queue;


void init(Queue *q) {
    q->front = q->rear = -1;
}

int isEmpty(Queue *q) {
    if (q->front == q->rear)
        return 1;
    return 0;
}

void push(Queue *q, int x) {
    q->data[++(q->rear)] = x;
}

int pop(Queue *q) {
    if (isEmpty(q))
        return -1;
    return q->data[++(q->front)];
}

int size(Queue *q) {
    if (isEmpty(q)) {
        return 0;
    }
    return (q->rear - q->front);
}

int front(Queue *q) {
    if (isEmpty(q)) return -1;
    return q->data[q->front + 1];
}

int back(Queue *q) {
    if (isEmpty(q)) return -1;
    return q->data[q->rear];
}

int main() {
    Queue q;
    init(&q);

    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char str[6];
        scanf("%s", str);

        if (!strcmp(str, "push")) {
            int x = 0;
            scanf("%d", &x);
            push(&q, x);
        }
        else if (!strcmp(str, "pop"))
            printf("%d\n", pop(&q));
        else if (!strcmp(str, "size"))
            printf("%d\n", size(&q));
        else if (!strcmp(str, "empty"))
            printf("%d\n", isEmpty(&q));
        else if (!strcmp(str, "front"))
            printf("%d\n", front(&q));
        else if (!strcmp(str, "back"))
            printf("%d\n", back(&q));
    }
    return 0;
}