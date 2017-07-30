    #include <iostream>
    #include<stdlib.h>
    using namespace std;
     
    typedef struct BST{
        long int item;
        struct BST*left,*right;
    }node;
    long int l,r;
    int height(node*p){
        if(p==NULL)
            return 0;
        return (1+max(height(p->left),height(p->right)));
    }
     
     
    node* insert(node*p,long int data){
        if(p==NULL){
            p=(node*)malloc(sizeof(node));
            p->item=data;
            p->left=p->right=NULL;
        }
        else if(p->item>=data){
            p->left=insert(p->left,data);
        }else{
            p->right=insert(p->right,data);
        }
        return p;
    }
     
     
    int main(){
        long int i,x,n;
        node*root=NULL;
        scanf("%ld",&n);
        for(i=0;i<n;i++){
            scanf("%ld",&x);
            root=insert(root,x);
        }
        printf("%ld\n",height(root));
        return 0;
    }
