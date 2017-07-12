#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int item;
	struct list *next;
} node;
node *head;
node *creat_node(int x)
{
	node *p;
	p = (node *) malloc(sizeof(node));
	p->item = x;
	p->next = NULL;	
	return p;
}

node *insert_node(int x)
{
	node *newnode;
	node *tail;
	if (head == NULL)
	{
		newnode = creat_node(x);
		head = newnode;
		tail = head;
		return head;
	}
	else
	{
		newnode = creat_node(x);
		newnode->next = head;
		head = newnode;
		return head;
	}
}
void main()
{
	int i,n,k;
	node*p,*q,*r,*s,*tmp;
	puts("enter n");
	scanf("%d",&n);
for(i=1;i<n;i++)
insert_node(i);
puts("enter k");
scanf("%d",&k);
p=head;
q=head;
for(i=1;i<k;i++)
{
r=p;
p=p->next;
}
for(i=1;i<n-k;i++)
{
s=q;
q=q->next;
}
if(p==head)
{
q->next=p->next;
s->next=p;
p->next=NULL;
head=q;
}
else
{
	r->next=q;
	s->next=p;
	tmp=p->next;
	p->next=q->next;
	q->next=tmp;
}
for(tmp=head;tmp;tmp=tmp->next)
printf("%d-->",tmp->item);
}