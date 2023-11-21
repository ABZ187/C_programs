#include<stdio.h>
#include<stdlib.h>
struct  node
{
    int data;
    struct node *left,*right;
};

struct node *head;
int creation=0;


void insert(int input){
    struct node *temp1 = head,*temp2;
    while(1){
        if(input>temp1->data){
            if(temp1->right!=NULL){
                temp1 = temp1->right;
            }
            else{
                temp2 = (struct node*)malloc(sizeof(struct node));
                temp2->left=NULL;
                temp2->right=NULL;
                temp2->data=input;
                temp1->right=temp2;
                break;
            }
        }
        else if(input<temp1->data){
            if(temp1->left!=NULL){
                temp1= temp1->left;
            }
            else{
                temp2 = (struct node*)malloc(sizeof(struct node));
                temp2->left=NULL;
                temp2->right=NULL;
                temp2->data=input;
                temp1->left=temp2;
                break;
            }

        }
        else{
            break;
        }
    }
}

void create(){
    if(creation==0){
        int i,n,input;
        creation=1;
        head = (struct node *)malloc(sizeof(struct node));
        head->left=NULL;
        head->right=NULL;
        printf("Enter the no. of elements you want to insert\n");
        scanf("%d",&n);
        printf("Enter the first element\n");
        scanf("%d",&head->data);
        for(i=0;i<n-1;i++){
            printf("Enter the %d element\n",i+2);
            scanf("%d",&input);
            insert(input);
        }
    }

}

void inorder(struct node* headptr){ //LDR
    struct node *temp1 = headptr;
    if(temp1->left!=NULL){
        inorder(temp1->left);
        printf("%d ",temp1->data);
    }
    else{
        printf("%d ",temp1->data);
            }
    if(temp1->right!=NULL){
        inorder(temp1->right);
        }
}

void preorder(struct node* headptr){
    struct node *temp1=headptr;
    printf("%d ",temp1->data);
    if(temp1->left!=NULL){
        preorder(temp1->left);
    }
    if(temp1->right!=NULL){
        preorder(temp1->right);
    }
}

int main(){
    int a;
    create();
    printf("\nInorder ");
    inorder(head);
    printf("\nPreorder ");
    preorder(head);
    
    // printf("press 1 for exit\n");
    // scanf("%d",&a);
    // if(a==1){
    //     exit(0);

    // }
    return 0;
}