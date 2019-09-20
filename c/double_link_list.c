#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* left; //Pointer to left node
  struct node* right; //Pointer to Right node
};

struct node *START;
void insert_begin()
{
    struct node *temp;
    int item;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter value for node: ");
    scanf("%d",&item);
    if(START==NULL)
    {
        temp->right=NULL;
        temp->left=NULL;
        temp->data=item;
        START=temp;
    }
    else
    {
        temp->data=item;
        START->right=temp->left;
        temp->right=NULL;
        START=temp;
    }
    printf("Node inserted at Address = %d",temp);
}

int main()
{
    insert_begin();
}
