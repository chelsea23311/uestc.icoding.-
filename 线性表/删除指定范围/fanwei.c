#include <stdio.h>
#include <stdlib.h>
#include "list.h" // 请不要删除，否则检查不通过

void del_x2y(SeqList *L, ElemType x, ElemType y) {
int pre=-1,cur=0;
while(cur<=L->last){
    if(L->elem[cur]>=x&&L->elem[cur]<=y){
        cur++;
    }
    else{
        pre++;
        L->elem[pre]=L->elem[cur];
        cur++;
    }
}
L->last=pre;
}