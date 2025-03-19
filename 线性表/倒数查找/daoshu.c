#include <stdio.h>
#include <stdlib.h>
#include "list.h" // 请不要删除，否则检查不通过

int lnk_search(LinkList L, int k, ElemType* p_ele) {
int sum=1;
Node *l=L;
while(l!=NULL){
    l=l->next;
    sum++;
}
l=L;
for(int i=1;i<=sum-k-1;i++){
    l=l->next;
}
*p_ele=l->data;
if(*p_ele){
    return 1;
}
else{
    return 0;
}
}