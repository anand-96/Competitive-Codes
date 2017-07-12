#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int item;
	struct list *next,*prev;
} node;
node*head,*x;
node*multilist(node *, node *);
void fact(int);
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
	 int f;
	 scanf("%d",&f);
	fact(f);
}
void fact(int f)
{
int i;
node*L3,*b,*L1,*L2;
for(i=0;i<2;i++,f--)
{
L2=insert_node(f/10);
L2=insert_node(f%10);
}
L1=L2->next->next;
L3=multilist(L1,L2);
L2=L1->prev;
L1->item=f%10;
L1->next->item=f/10;
puts("123");
//	printf("%d\n",x->item);
for(i=0;i<4;L3=L3->next,i++,L2=L2->prev)
{
	L2->item=L3->item;
//	puts("33");
	printf("%d",L2->item);
}
	puts("");
	L2=L2->next;
L3=multilist(L1,L2);
for(L3;L3;L3=L3->next)	printf("%d ",L3->item);
    }

node* multilist(node*L1, node*L2)
{
node*q,*p,*L3=head;
node*x=L2->prev,*y;
int i=0,c, mul,a=0,n=1,k=0,temp;
puts("abc");
for(c=0,q=L2,p=L1;q!=L1;q=q->next)
{
	while(p)
	{
		if(p->next==NULL)
		{
mul= p->item*q->item+c+a;
	L3=insert_node(mul%10);
 L3=insert_node(mul/10);
puts("bc");
 //	printf("%d ",L2->item);
 		}
		else
		{
mul= p->item *q->item+c+a;
		c = mul/ 10;
	L3=insert_node(mul%10);
		}
	p=p->next;
if(i){
	x=x->prev;
	a=x->item;
	}
	}
	i++;
	if(!k){
	x=L2->prev;
	}
	k++;
for(i=0;i<n&&q->next!=L1;i++,x=x->prev,a=x->item)
		L3=insert_node(x->item);
	n++;
	p=L1;
	c=0;
	puts("ass");
}
/*for(;L3!=x;L3=L3->next,x=x->prev)
{
temp=L3->item;
L3->item=x->item;
x->item=temp;
}*/
puts("ss");
return L3;
	}