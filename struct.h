typedef struct linkedList {
    struct node* head;
    int size;
}L;

typedef struct node {
    int key;
    struct node *next;
    struct node *prev;
}N;

typedef struct stack{
    int top;
    int *size;
}S;

typedef struct queue{
    int head;
    int tail;
    int *size;

}Q;
