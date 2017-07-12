#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<malloc.h>
#include<time.h>
#define INDEX(c) ((int)c - (int)'a')
typedef struct trie_node
{
    int value;
    char remain[30];
    struct trie_node*children[26];
}node;

typedef struct trie trie_t;
struct trie
{
    node *root;
    int count;
};
int n;
node*getNode()
{
    node *p = NULL;

    p=(node *)malloc(sizeof(node));
    if(p==NULL)
    {
        puts("\n\nMemory allocation failed!!");
        return NULL;
    }
    if( p)
    {
        int i;
         p->value = 0;

        for(i = 0; i <26; i++)
        {
            p->children[i] = NULL;
        }
    }

    return p;
}

void initialize(trie_t *pTrie)
{
    pTrie->root = getNode();
    pTrie->count = 0;
}


void insert(trie_t *pTrie, char key[])
{
    int level;
    int length = strlen(key);
    int index;
    node*pCrawl;

    pTrie->count++;
    pCrawl = pTrie->root;

    for( level = 0; level < length; level++ )
    { 
    	if(key[level+1]==','){
      //pCrawl->value=pTrie->count;
        strcpy(pCrawl->remain,key);
    	}
    	if(key[level]==',')
    	{    
 //   	printf(",");
    		level++;
    		pCrawl->value=pTrie->count;
  strcpy(pCrawl->remain,key);
		pCrawl = pTrie->root;
    	}
    		if(key[level]=='.')
    	{    
    //	printf(".");
        	level++;
    	}
    	
   if(isupper(key[level]))
{ 
key[level]=tolower(key[level]);
  		//printf("%c",key[level]);
  //		puts(key);
   }
       	if(key[level]==39)
    	{    
    //	printf("%c",key[level]);
    		level++;
    	}
   
      index = INDEX(key[level]);
        if( !pCrawl->children[index] )
        {
  //   printf("%c",index+'a')
            pCrawl->children[index] = getNode();
        }

        pCrawl = pCrawl->children[index];
    }
//    puts("");
    // mark last node as leaf
    pCrawl->value = pTrie->count;
  strcpy(pCrawl->remain,key);
   pTrie->count=0;
}

// Returns non zero, if key presents in trie
int search(trie_t *pTrie, char key[])
{
    int level,i;
    int length = strlen(key);
    int index;
    char ch,*temp;
    node*pCrawl;

    pCrawl = pTrie->root;
    for( level = 0; level < length; level++ )
    {
    		if(key[level]=='.')
        	level++;
 if(isupper(key[level]))
   	level++;
       	if(key[level]==39)
    		level++;
    
    index =INDEX(key[level]);

        if( !pCrawl->children[index] )
            return 0;

        pCrawl = pCrawl->children[index];
    }

    if(0 != pCrawl && pCrawl->value)
            {
            		puts("\nThe string  is present in the databse\n");
   		 puts(pCrawl->remain);
   	/*	 temp=pCrawl->remain;
            	free(temp);*/
            }
				else
				puts("\nThe string is not present in the database");
}
//after having the prefix traverse the sub tree of trie to fetch and print the suggestions
void traverse(node*pCrawl, char key[],int index)
{
   int i;
   char *temp;
    if(!pCrawl)
   {
   	   return ;
   }
   if(pCrawl->value!=0&&pCrawl!=NULL)
   {
   	n++;
   	if(strcmp(pCrawl->remain,""));
puts(pCrawl->remain);
   }
   for(i=0;i<26;i++)
   {
   temp=(char *)malloc(sizeof(char)*strlen(key)+2);
       strcpy(temp,key);
       temp[strlen(key)]=(char)(97+i);
       temp[strlen(key)+1]='\0';
   if(pCrawl->children[i]!=NULL)
       traverse(pCrawl->children[i], temp,i);
    free(temp);
   }

}
//travel down the trie upto the prefix and then look for suggestion using traverse function
void checkword(trie_t *pTrie, char key[])
{
    int level,i;
    int length = strlen(key);
    int index;
    node*pCrawl;

    pCrawl = pTrie->root;
   if(strcmp(key,"")==0)
    {
        printf("The input is NULL!!");
        return 0;
    }

    for( level = 0; level < length; level++ )
    {
        index = INDEX(key[level]);

        if( pCrawl->children[index]==NULL)
        {
        	   // printf("Prefix is not present");
            return 0;
        }
         pCrawl = pCrawl->children[index];
    }
traverse(pCrawl, key,index);
}

int isItFreeNode(node *pNode)
{
int i;
for(i = 0; i <26; i++)
{
if( pNode->children[i] )
return 0;
}
return 1;
}
int delet(node*pNode, char key[], int level, int len)
{
if( pNode )
{
// Base case
if( level == len )
{
	printf("%d ",pNode->value);
if( pNode->value )
{
// Unmark leaf no
strcpy(pNode->remain,"");
//printf("%c",key[level]);
pNode->value = 0;
//free(pNode->remain);
// If empty, node to be deleted
if( isItFreeNode(pNode) )
{
return 1;
}
return 0;
}
}
else // Recursive case
{
int index = INDEX(key[level]);
if( delet(pNode->children[index], key, level+1, len) )
{
// last node marked, delete it
//free(pNode->children[index]);
// recursively climb up, and delete eligible nodes
return ( !pNode->value&& isItFreeNode(pNode) );
}
}
}
return 0;
}
void delete(trie_t *pTrie, char key[])
{
int len = strlen(key);
if( len > 0 )
{
delet(pTrie->root, key, 0, len);
}
}


int main()
{
	
	 double total_time;
 clock_t start, end;
FILE*fp=fopen("assig3.txt","r");
    int ch,i;
    char str[50];
    trie_t trie;
    initialize(&trie);
            for(i=0;i<1547;i++){
                   fscanf(fp,"%s",str);
	   insert(&trie, str);
        }
while(1)
{
puts("\n//Operations to be performed//");
    puts("\n1:Insert a word in a HOMOPHONES  dictionary\n2:Delete a word from a HOMOPHONES dictionary\n3:Searching a word in a HOMOPHONES dictionary\n4:Count the number of words start with any alphabet\n");
    puts("Enter your choice");
    scanf("%d",&i);
     switch(i)
    {
        case 1 :
         start = clock();
        puts("\nEnter a word to be insert ");
             scanf("%s",str);
               if(strcmp(str,"")==0)
			{
puts("Empty word are not allowed");
				break;
			}
			insert(&trie,str);
puts("\n....!!!!  Word is inserted   !!!!.... ");
puts("\nYou want see updated dictionary(1/0)\n");
scanf("%d",&ch);
if(ch==1){
	n=0;
	strcpy(str,"a");
	for(i=0;i<26;i++){
		 checkword(&trie,str);
		 str[0]='a'+i;
	}
}
			 end = clock();//time count stops 
 total_time = ((double) (end - start))/1000000000; 
			 printf("\nTime taken : %f\n", total_time);

			break;
        case 2 : 
         start = clock();
    puts("\nEnter a word to be deleted\n");
         scanf("%s",str);
        delete(&trie,str);
    puts("\n....!!!!  Word is deleted  !!!!....\n ");
    puts("\nYou want see updated dictionary(1/0)\n");
scanf("%d",&ch);
if(ch==1){
	n=0;
	strcpy(str,"a");
	for(i=0;i<26;i++){
		 checkword(&trie,str);
		 str[0]='a'+i;
	}
     end = clock();
 total_time = ((double) (end - start))/1000000000; 
      printf("\nTime taken : %f\n", total_time);
                            break;
        case 3 :
         start = clock();
        puts("\nPlease enter the word to be searched\n");
                   scanf("%s",str);
		   if(strcmp(str,"")==0)
			{
				puts("Empty word are not allowed");
				break;
			}
		 search(&trie,str);
		  end = clock();
 total_time = ((double) (end - start))/1000000000; 
		  printf("\nTime taken : %f\n", total_time);

            break;
        case 4:
         start = clock();
        puts("\nPlease enter the prefix\n");
                   scanf("%s",str);
		   if(strcmp(str,"")==0)
			{
				puts("Empty strings are not allowed");
				break;
			}
			n=0;
		 puts("\nAll possible words are ::\n");
                  checkword(&trie,str);
                  printf("\nNumber of words starting with '%c'is %d\n",str[0],n);
     end = clock();
 total_time = ((double) (end - start))/1000000000; 
                  printf("\nTime taken : %f\n", total_time);

                  break;
     
     default: puts("Invalid option!!Please try again!!!!\n\n");
                 break;
           }
   puts("\nYou want to continue(1/0)\n");
   scanf("%d",&ch);
    if(ch==1)
continue;
else return;
}
}
}