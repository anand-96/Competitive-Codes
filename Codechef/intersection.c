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
	int i,x;
	node*L1,*L2,*p=NULL ,*q=NULL, *r=NULL;
	for(i=0;i<10;i++){
		
	scanf("%d",&x);
	L1=insert_node(x);
	if(i==5){
L2=L1;
printf("%d--->",L2->item);
	}	}
	/*	for(i=0;i<5;i++){
	scanf("%d",&x);
	L2=insert_node(x);
*/	printf("%d--->",L2->item);
		
	for(p=L2;p!=L1;p=p->next)
	{
	//printf("%d--->",L2->item);
	   for(q=L1;q;q=q->next)
	   if(p->item!=q->item)
	   {
	   q=q->next;
	   printf("%d--->",q->item);
}	   
	   else
	   {
      r=insert_node(p->item);
      printf("%d--->",r->item);
	   }
	}
	   for(q=r;q!=L2->next;q=q->next)
	   printf("%d-->",q->item);
	   for(q=L2;q;q=q->next)
	   {
	   	r=q;
	   	free(r);
	   }
}