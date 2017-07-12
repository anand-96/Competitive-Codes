#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct list
{
	int item;
	struct list*next ;
	}node;
	node*head,*tail;
	void splitlist();
void main()
{
	node*p,*tail,*b;
	int i,k,x;
	puts("enter elements ");
		scanf("%d",&x);
	p=(node*)malloc(sizeof(node));
	p->item=x;
	p->next=NULL;
	head=p;
	tail=p;
	for(i=2;i<=MAX;i++)
	{
		scanf("%d",&x);
p=(node*)malloc(sizeof(node));
	p->item=x;
tail->next=p;
tail=p;
		}
		puts("linked list.... ");
		for(b=head;b;b=b->next)
printf("%d-->",b->item);
puts("");
splitlist();
}
void splitlist()
{
node *p,*q,*b;
	int n,i ,x ;
		puts("Splited linked lists are.... ");
for(p=head;p->next->next;p=p->next->next) {
//	puts("Splited linked list are.... ");
printf("%d--->",p->item);
	}
	printf("%d--->",p->item);
	puts("\n");	for(p=head,q=p->next;q->next;q=q->next->next) {
	//		puts("Splited linked list are.... ");
printf("%d--->",q->item);
	}
printf("%d--->",q->item);
}