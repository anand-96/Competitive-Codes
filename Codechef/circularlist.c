#include<stdio.h>
#include<stdlib.h>
#define MAX 20
typedef struct list
{
	int item;
	struct list*next;
	}node;
	node*head;
void main()
{
	node*p,*q,*tail,*tmp;
	int i,k;
	p=(node*)malloc(sizeof(node));
	p->item=1;
	p->next=NULL;
	head=p;
	tail=p;
	for(i=2;i<=MAX;i++)
	{
p=(node*)malloc(sizeof(node));
	p->item=i;
tail->next=p;
tail=p;
		}
	tail->next=head;
	p=head;q=head->next;
	while(p!=q)
	{
		printf("%d-->",p->item);
		p=p->next;
		q=q->next->next;
	}
	
		for(tmp=head;tmp!=p->next;p=p->next)
		printf("%d-->",p->item);
		puts("end");
		
	}