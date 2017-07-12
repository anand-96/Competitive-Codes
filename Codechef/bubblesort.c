#include<stdio.h>
#include<stdlib.h>
#define MAX 5
typedef struct list
{
	int item;
	struct list*next,*prev ;
	}node;
	node*head,*tail;
	void bubblesort(node*, node*);
	int count,swap;
void insert()
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
bubblesort(head,tail);
}

void bubblesort(node*l,node*tail)
{
	node*b,*k;
	int pass,tmp;
	for(pass=0;pass<MAX ;pass++)
{printf("comparison =%d swapping=%d",count, swap);
	for(l=head,k=tail;l!=k;l=l->next)//k=k->prev)
	++count;
	if(l->item>l->next->item)
	{
		swap++;
	tmp=l->item;
	l->item=l->next->item;
	l->next->item=tmp;
	}
		//printf("%d--->",tail->item);
	//	tail=tail->prev;
	k=k->prev;
}
puts("Sorted list.... ");
for(b=head;b;b=b->next)
printf("%d-->",b->item);
}
void main()
{
insert();
//bubblesort(head,tail);
printf("comparison =%d swapping=%d",count, swap);
}