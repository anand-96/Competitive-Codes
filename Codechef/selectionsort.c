#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct list
{
	int item;
	struct list*next,*prev ;
	}node;
	node*head;
	void selectionsort(node*);
void main()
{
	node*p,*tail,*b;
	int i,k,x;
	puts("enter elements to be sort.. ");
		scanf("%d",&x);
	p=(node*)malloc(sizeof(node));
	p->item=x;
	p->next=NULL;
		p->prev=NULL;
	head=p;
	tail=p;
	for(i=2;i<=MAX;i++)
	{
		scanf("%d",&x);
p=(node*)malloc(sizeof(node));
	p->item=x;
tail->next=p;
p->prev=tail;
tail=p;
		}
		puts("linked list.... ");
		for(b=head;b;b=b->next)
printf("%d-->",b->item);
puts("");
selectionsort(head);
}
void selectionsort(node*p)
{
	node*tail,*b,*q;
	int min,i,j,tmp;
	for(p=head;p->next;p=p->next)
	{
		min=p->item;
	for(q=p->next;q;q=q->next){
	if(q->item<min){
	min=q->item;
	b=q;
	}
	}
	tmp=b->item;
	b->item=p->item;
	p->item=tmp;
	}
	puts("sorted list..... ");
		for(b=head;b;b=b->next)
printf("%d-->",b->item);
}