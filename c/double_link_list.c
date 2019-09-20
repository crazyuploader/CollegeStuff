#include<stdio.h>

struct node
{
  int data;
  struct node* left; //Pointer to left node
  struct node* right; //Pointer to Right node
};

struct node *START=NULL;

void append()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Please enter a value for a node: ");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(START==NULL)
    {
        START=temp;
    }
    else
    {
        struct node *p;
        p=START;
        while(p->right!=NULL)
        {
            p=p->right;
        }
        p->right=temp;
        temp->left=p;
    }
}

int main()
{
    append();
}
