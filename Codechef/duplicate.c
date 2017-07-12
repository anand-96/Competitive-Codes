#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
char item;
struct list*next;
}node;
node*head;
node* creat_node(char x)
{
node*p;
p=(node*)malloc(sizeof(node));
p->item=x;
p->next=NULL;
return p;
}
node*insert_node(char x)
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
node*p,*q,*t,*ch;
int i;
char x;
puts("Enter no's.");
for(i=0;i<10;i++)
{
scanf("%c",&x);
insert_node(x);
}
for(p=head;p->next->next;p=p->next)
{
for(t=p,q=p->next;q;)
if(p->item!=q->item)
{
q=q->next;
t=t->next;
}
else if(q->next==NULL&&p->item==q->item)
{
t->next=q->next;
	free(q);
	q=0;
	}
	else
	{
		ch=q;
t->next=q->next;
	free(ch);
q=t->next;
	}
}
for(t=head;t;t=t->next)
printf("%c",t->item);
}