#include <stdio.h>
#include <stdlib.h>
#include "list.h" // 请不要删除，否则检查不通过

void del_dupnum(SeqList *L)  {
   int pre=0,cur=0;
   while(cur<=L->last){
       if(L->elem[cur]==L->elem[pre]){
           cur++;
       }
       else{
           pre++;
           L->elem[pre]=L->elem[cur];
           
       }
   }
   L->last=pre;

}