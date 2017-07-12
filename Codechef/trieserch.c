 #include<stdio.h>
#include<conio.h>
struct node
{
int value;
struct node * child[26];
};




void insert(struct node**root,char*ch)
{
int i,k;
struct node *temp;
struct node *d;
d=*root;
for(i=0;ch[i]!='\0';i++)
{
if(d->child[ch[i]-'a']==NULL)
{
temp=(struct node*)malloc(sizeof(struct node));
temp->value=0;
for(k=0;k<=25;k++)
{
temp->child[k]=NULL;
}
d->child[ch[i]-'a']=temp;
}
if(ch[i+1]=='\0')
d->child[ch[i]-'a']->value =1;
d=d->child[ch[i]-'a'];
}
}


int search(struct node**root,char*ch)
{
int i;
struct node*temp;
temp=*root;
for(i=0;ch[i]!='\0';i++)
{
if(temp->child[ch[i]-'a']==NULL)
return 0;
temp=temp->child[ch[i]-'a'];
}
if(temp->value==1)
return 1;
else
return 0;
}


int main()
{char str[20];
struct node * root;
int i,n;
root=(struct node*)malloc(sizeof(struct node));
root->value=0;
for(i=0;i<=25;i++)
{
root->child[i]=NULL;
}
printf("\nenter no of values to be inserted in a trie");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{fflush(stdin);
printf("\nenter %d value",i+1);
scanf("%s",str);
insert(&root,str);
}
char ch[20];
printf("\nenter string to be searched in trie");
fflush(stdin);
scanf("%s",ch);
printf("%d\n",search(&root,ch));
getch();
}
 