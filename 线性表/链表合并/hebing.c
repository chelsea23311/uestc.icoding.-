#include <stdio.h>
#include <stdlib.h>
#include "list.h" // 请不要删除，否则检查不通过

void lnk_merge(LinkList A, LinkList B, LinkList C) {
    Node *a=A->next;
    Node *b=B->next;
   
    Node *c=C;
  
while(a!=NULL&&b!=NULL){
    c->next=a;
    c=c->next;
    a=a->next;
    c->next=b;
    c=c->next;
    b=b->next;
}
if(a==NULL){
    while(b!=NULL){
         c->next=b;
         b=b->next;
         c=c->next;
    }
}
if(b==NULL){
    while(a!=NULL){
        c->next=a;
        a=a->next;
        c=c->next;
    }
}
c->next=NULL;
}