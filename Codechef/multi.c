#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct list
{
	int item;
	struct list *next,*prev;
} node;
node*head,*tail;
node*multilist(node *, node *);
void fact(int,int);
node *creat_node(int x)
{
	node *p;
	p = (node *) malloc(sizeof(node));
	p->item = x;
	p->prev=NULL;
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
		head->prev= newnode;
		head=newnode;
		return head;
	}
}
void main()
{
	 int f,n;
	 put("enter no. of digits in number);
	fact(f);
}
void fact(int f,int n)
{
int i,a=f,b=f-1;
node*t,*L1=NULL,*L2=NULL,*L3=NULL;
for(i=0;i<n;i++,a/=10)
L1=insert_node(a%10);
for(i=0;i<n;i++,b/=10)
L2=insert_node(b%10);
L3=multilist(L1,L2);
for(t=L3->next;t!=L2;t=t->next);
}
node* multilist(node*L1, node*L2)
{
	int mul,a,c;
node*L3,*p,*q;	for(c=0,p=tail,q=L1->prev;p!=q;p=p->prev)
if(p==L1)
{
 mul=q->item*p->item+c+a;
 c=mul/10;
 L3=insert_node(mul%10);
 L3=insert_node(mul/10);
}
else
{
	mul=q->item*p->item+c+a;
 c=mul/10;
 L3=insert_node(mul%10);
}
q=q->prev;
y=L2->prev;
while(q!=L2->prev)
{
for(c=0,p=tail,x=y->prev,a=x->item;;p=p->prev,x=x->prev, a=x->item)
if(p==L1)
{
 mul=q->item*p->item+c+a;
 c=mul/10;
 x->item=mul%10;
 L3=insert_node(mul/10); 
 break;
}
else
{
	mul=q->item*p->item+c+a;
 c=mul/10;
 x->item=mul%10;
}
q=q->prev;
y=y->prev;
}
return L3;
}