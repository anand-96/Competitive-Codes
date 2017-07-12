#include <stdio.h>
#include<stdlib.h>
typedef struct linkedList{
    int item;
    int flag;
    struct linkedList* next;
}node;

node* head,*tail;

void insert(int data){
    node* p=(node*)malloc(sizeof(node));
    p->item=data;
    p->flag=0;
    p->next=NULL;
    if(head==NULL){
        head=p;
        tail=p;
    }else{
        tail->next=p;
        tail=tail->next;
    }
}

int main() {
    int n,sum=0,x,i,j,k;
    node*p,*q;
    scanf("%d",&n);
	for(i=1;i<=n;i++){
	    scanf("%d",&x);
	   insert(x);
	   sum+=x;
	}
	sum=sum/(n/2);
	 for(i=1,p=head;i<=n && p!=NULL;i++,p=p->next){
	     if(p->flag==1)
	        continue;
	     for(j=i+1,q=p->next;j<=n && q!=NULL;j++,q=q->next){
    	         if(q->flag==1)
	                continue;
	         if(sum==(p->item+q->item)){
	             q->flag=1;
	             printf("%d %d\n",i,j);
	             break;
	         }
	     }
	 }
	return 0;
}