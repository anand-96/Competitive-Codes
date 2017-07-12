#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
int item;
struct list*next;
}node;
node*head,*tail;
node* creat_node(int x)
{
node*p;
p=(node*)malloc(sizeof(node));
p->item=x;
p->next=NULL;
return p;
}
node*insert_node(int x)
{
static node*tail;
node*newp;
if(head==NULL)
{
	newp=creat_node(x);
tail=newp;
head=tail;
puts("as");
}
else
{
	newp=creat_node(x);
puts("s");
tail->next=newp;
tail=tail->next;
}
return tail;
}
void main()
{
node*p,*q,*r,*t,*b;
int i,x;
puts("Enter no's.");
for(i=0;i<10;i++)
{
scanf("%d",&x);
insert_node(x);
}
p=head;
q=p;
r=p->next;
while(p->next!=NULL)
{
p->next=q->next;
q->next=r;
r=q;
q=p->next;
}
for(t=r;t;t=t->next)
printf("%d->",t->item);
}