#include <stdio.h>
#include <stdlib.h>
#include "list.h" // 请不要删除，否则检查不通过

void lnk_del_x2y(LinkList L, ElemType mink, ElemType maxk) {
    Node *l=L;
    while(l->next!=NULL){
        if(l->next->data>mink&&l->next->data<maxk){
            LinkList a=l->next;
            l->next=a->next;
            free(a);
        }
        else{
            l=l->next;
        }
    }
    
}