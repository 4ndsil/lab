#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "test.h"


int main(){

L* list1;
L* list2;
N* node;
list1 = malloc(sizeof(L));
list2 = malloc(sizeof(L));
node = malloc(sizeof(N));
S* stack;
stack = malloc(sizeof(S));

createList1(list1);

printf("\nlist1: node %d", *list1->head);
printf("\nlist1: node %d", *node->next);
printf("\nlist1: node %d", *node->next->next);
printf("\nlist1: node %d", *node->next->next->next);
testMax(list1, 10);
//testMax(list2, 9);
maximum(list1);
testMin(list1, 1);
//search(list1,3);
//successor(list1,list1->head);
//testMin(list2, 1);
//testPre(list1,node, 5);
testSucc(list1, 10);
//testPre(list2,node, 9);
//testSucc(list2,node, 9);
testPreMaximum(list1,node);
testPreMaximum(list2,node);
return 0;

}
