#include <stdio.h>
#include <stdlib.h>
#include "list.h" // 请不要删除，否则检查不通过

void odd_even(SeqList *L) {
    int i = 0, j = L->last;
    while (i < j) {
        if(L->elem[i]%2!=0){
            i++;
        }
        if(i<j&&L->elem[j]%2==0){
            j--;
        }
        if(L->elem[i]%2==0&&L->elem[j]%2!=0){
            int temp=L->elem[i];
            L->elem[i]=L->elem[j];
            L->elem[j]=temp;
        }
    }
}