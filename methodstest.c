#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "test.h"

int testMax(L*list,int key){
    int expected = key;
    int returnValue = maximum(list);
    if(returnValue = expected){
        printf("\nsuccess");
        printf("\nmaximum() returned %d, expected value %d", returnValue, expected);
        return 1;
        }else{
            printf("\nfail");
            printf("\nmaximum() returned %d, expected value %d", returnValue, expected);
        return 0;
        }
}

int testMin(L*list,int key){
    int expected = key;
    int returnValue = minimum(list);
    if(returnValue = expected){
        printf("\nsuccess");
        printf("\nminimum() returned %d, expected value %d", returnValue, expected);
        return 1;
        }else{
            printf("\nfail");
            printf("\nminimum() returned %d, expected value %d", returnValue, expected);
        return 0;

        }
}

int testSucc(L*list, int key){
    N*searched = (N*)malloc(sizeof(N));
    searched = search(list, key);
    int returnValue = successor(list,searched);
    if(returnValue > searched){
        printf("\nsuccess");
        printf("\nsuccessor of %d is %d ", key, returnValue);
        return 1;
        }else{
            printf("\nfail");
            printf("\nsuccessor of %d not found");
        return 0;
        }
}

int testPre(L*list, int key){
    N*searched = (N*)malloc(sizeof(N));
    searched = search(list, key);
    int returnValue = predecessor(list,searched);
    if(returnValue < searched){
        printf("\nsuccess");
            printf("\npredecessor of %d is", key, returnValue);
        return 1;
        }else{
            printf("\nfail");
            printf("\npredecessor of %d not found");
        return 0;
        }
}

int testPreMaximum(L* list, N* node){
    int expected = maximum(list);
    int returnValue = predecessor(list,node);
    if(returnValue = expected){
        printf("\nsuccess");
        printf("\npredecessor of %d: expected value %d, returned %d ", list, expected, returnValue);
        return 1;
        }else{
            printf("\nfail");
            printf("\npredecessor of %d: expected value %d, returned %d ",list, expected, returnValue);
        return 0;
        }
}
