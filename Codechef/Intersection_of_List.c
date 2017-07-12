#include <stdio.h>
#include<stdlib.h>
typedef struct linkedList{
    int item;
    struct linkedList* next;
}node;

node* head,*tail;

node* insert(int data){
    node* p=(node*)malloc(sizeof(node));
    p->item=data;
    p->next=NULL;
    if(head==NULL){
        head=p;
        tail=p;
    }else{
        tail->next=p;
        tail=tail->next;
    }
    return head;
}
void reverse(){
    node*p=head,*q,*r=head;
    while(r->next!=NULL){
        q=r->next;
        r->next=q->next;
        q->next=p;
        p=q;
    }
    head=p;
}


int main() {
    int i;
    node*p,*q,*head1,*head2;
	for(i=1;i<11;i++)
	  head1= insert(i);

	    head=NULL;
	    tail=NULL;


	for(i=1;i<21;i+=2)
	    head2=insert(i);
	    head=NULL;
	    tail=NULL;


	puts("Link List 1:-");
	for(p=head1;p!=NULL;p=p->next)
	    printf("%d-->",p->item);
	puts("\nLink List 2:-");

	for(p=head2;p!=NULL;p=p->next)
	    printf("%d-->",p->item);

	    p=head1;
	    q=head2;

	while(p!=NULL && q!=NULL){
	    if(p->item == q->item){
	        head1=insert(p->item);
            p=p->next;
            q=q->next;
	    }
	    else if(p->item > q->item){
	        q=q->next;
	    }
	    else{
	        p=p->next;
	    }
	}
	puts("\nIntersection of Link List is:-");
	for(p=head1;p!=NULL;p=p->next)
	    printf("%d-->",p->item);


    for(p=head2;p!=NULL;p=p->next){

    }

	return 0;
}
