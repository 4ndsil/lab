#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "test.h"

void createList1(L* list1){
    N* node;
    node = malloc(sizeof(N));
    int L1[6]= {3, 1, 5, 10, 8, 7};
    int L2[6]= {5, 2, 9, 6, 1, 2};
    list1->head->key = 3;
    list1->size = 6;
    int i = 0;
    while(i != list1->size){
        node = list1->head->next;
        //for(i = 0; i < list1->size; i++){
        node->key = L1[i];
        insert(list1, node);
        node = node->next;
        i++;
        }
}

void insert(L* list, N* node){
   printf("\nnode key is %d", *node);
    if(list->head != NULL){
        list->head->next = node->next;
        node = list->head->next;
        if(list->head->next != NULL){
            list->head->next->prev = node;
        }
    }
}

int isEmpty(L* list)
{
    if(list->head == NULL){
            printf("\nThe list is empty.");
        return 1;
    }
    printf("\nThe list is not empty.");
    return 0;
}

int search(L* list, int key){

        while(list->head != NULL && list->head->key != key){
                list->head = list->head->next;
        }
        printf("\nsearched node is %d", list->head->key);
        return list->head;
}

void delete(L* list, N* node){
    if(node->prev != NULL){
        node->prev->next = node->next;
    }else{
        list->head = node->next;
        if(node->next != NULL){
            node->next->prev = node->prev;
    }
 }
}

int maximum(L* list){
    int max = list->head->key;
    while(list->head != NULL){
        if(list->head->key > max){
            max = list->head->key;
            printf("%d", max );
            return max;
        }
            list->head = list->head->next;
    }
}

int minimum(L* list){
    int min = list->head->key;
    while(list->head != NULL){
        if(list->head->key < min){
            min = list->head->key;
            return min;
        }
            list->head = list->head->next;
    }
}

int successor(L* list, N* node){
    int successor = node->key;
    while(list->head != NULL && node->next != NULL){
        if(successor < node->key){
            successor = node->key;
            //printf("\nsuccessor is %d", successor);
            return successor;
        }
    node = node->next;
    }
}

int predecessor(L* list, N* node){
    int predecessor = node->key;
    while(list->head != NULL && node->prev != NULL){
        if(predecessor > node->key){
            predecessor = node->key;
            return predecessor;
        }
    node = node->prev;
    }
}

void createStack(S*stack){
    stack->size = 10;
    int S1 []= {9,6,0,9,0,7,1,7,1,8};
    for(int i =0; i<stack->size; i++){
      //  push(stack,S1[i]);
    }
}

void push (S* stack, int value){
    //stack->size[++(stack->top)] = value;
    stack->top = stack->top +1;
    stack->size[stack->top] = value;
}

int pop(S* stack){
    if(stack == NULL){
        return 0;
    }else{
        return stack->size[stack->top--];
        return 1;
    }
}

void enqueue(Q* queue, int value){
    if(queue->tail = queue->head){
        printf("error, overflow");
    }
    if(queue->tail = queue->size){
        queue->tail = 1;
    }else{
    queue->tail = queue->tail +1;
    }
}






