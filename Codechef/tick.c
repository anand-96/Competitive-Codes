#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct list
{
	int id;
	char SA[10];
	char DA[10];
	float time;
	struct list *next;
} node;
node *front;
node *creat_node();
node *insert_node();
void recordfromfile();
void booking();
void cancelation();
void update();
node *insert_node()
{
	int i;
	node *p, *rear;
	p = (node *) malloc(sizeof(node));
	p->next = NULL;
	rear = p;
	if (front == NULL)
	{
		printf("%u\n", rear);
		rear = p;
		front = rear;
		printf("%u\n", rear);
	}
	else
	{
		rear->next = p;
		rear = rear->next;
		puts("as");
		printf("%u\n", rear);
	}
	return rear;
}

void main()
{
	node *b;
	int i, ch;
	// puts("sgd");
	// recordfromfile();
	while (1)
	{
		puts("....... Welcome to ticket office.......");
		puts("What you want?\n");
		puts("n2Booking a ticket....\n2:Cancelation of ticket.....\n3Update reserved file....\n4:Reservation for next 20 user Id's5:Exit from ticket office... \n");
		puts("\nenter your choice..... ");
		scanf("%d", &ch);
		switch (ch)
		{
			recordfromfile();
			break;
		case 1:
			recordfromfile(1, 20);
			puts("Reservation is done only.........");
			puts("\n1:If entered time is in between 8.00- 9.00 AM .");
			puts("2:if source and destination will be either Indore or Bhopal.\n\n");
			booking();
			break;
		case 2:
			cancelation();
			break;
		case 3:
			update();
			break;
		case 4:
			recordfromfile(1, 20);
		case 5:
			exit(0);
		}
	}
}

void recordfromfile(int a, int b)
{
	int i;
	FILE *fp = fopen("userinfo.txt", "r+");
	node *p, *rear;
	p = (node *) malloc(sizeof(node));
	p->next = NULL;
	fscanf(fp, "%d%s%s%f", &p->id, p->SA, p->DA, &p->time);
	printf("%d  %s  %s  %f\n", p->id, p->SA, p->DA, p->time);
	rear = p;
	front = p;
	for (i = a; i < b; i++)
	{
		p = (node *) malloc(sizeof(node));
		p->next = NULL;
		fscanf(fp, "%d%s%s%f", &p->id, p->SA, p->DA, &p->time);
		rear->next = p;
		rear = p;
		printf("%d  %s  %s  %f\n", rear->id, rear->SA, rear->DA, rear->time);

	}
}

void booking()
{
	int z;
	int i, k = 50, seat = 1;
	node *t, *temp, *p;
	printf("Enter 1 to go for booking... ");
	for (i = 1, t = front; t; p = t, t = t->next, seat++, i++)
	{
		if (i > 3)
			i = 1;
		// printf("Enter 1 for a next booking... ");
		scanf("%d", &z);
		if (z == 1)
		{
			puts("\n............Welcome to ticket counter...............\n");
			printf("Counter number=%d...\n", i);
			if ((t->time >= 8.00 && t->time <= 9.00)
				&& (t->SA[0] == 'I' || t->SA[0] == 'B') && (t->DA[0] == 'B'
															|| t->DA[0] == 'I')
				&& seat)
			{
				puts("\nAll the constraint are matched. ");
				printf("Available seats=%d\n\n", k);
				if (k-- != 0)
				{
					puts("Enter 1 to confirm your ticket......");
					scanf("%d", &z);
					if (z == 1)
					{
						puts("booking is done for..........");
						printf
							("user id=%d,reservation time=%f, SA=%s,   DA=%s.....\n",
							 t->id, t->time, t->SA, t->DA);
					}
					else
						return;
				}
				else
					puts("seat not available");
			}
			else
			{
				printf("for a user id=%d\n", t->id);
				puts("booking not possible either due to constraint not matched  or seats not available\n");
				if (t == front)
				{
					temp = front;
					front = front->next;
					free(temp);
				}
				else
				{
					temp = t;
					p->next = t->next;
					free(temp);
				}
			}
		}
		else
			return;
		puts("Enter 1 for a next booking... );
}
}
void cancelation()
{
	int w;
	int x;
node*tmp=front,*q=tmp;
puts(" Enter 1 if you want to cancelled your ticket ");
	scanf(" % d ",&w);
	if(w==1)
	{
		puts(" enter your id - ");
		scanf(" % d ",&x);	for(tmp=front;tmp;tmp=tmp->next)   if(front->id==x)
        {
          front=tmp->next;
          free(tmp);
          puts(" \ nyour ticket is cancelled successfully ");
          return;
        }
     if(tmp->next->id==x)
	{
		q=tmp->next;
	tmp->next=tmp->next->next;
	free(q);
	puts(" \ nyour ticket is cancelled successfully ");
          return;
	}	
	else
	{
         puts(" invalid user id ");
         return;
	}
	}
}
 void update()
 {
 	node* f;
 FILE*fp=fopen(" userinfo.txt "," r + ");
for(f=front;f;f=f->next)
fprintf(fp," % d % s % s % f \ n ",f->id, f->SA,f->DA, f->time);
 }
