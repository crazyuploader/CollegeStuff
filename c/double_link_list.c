#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *left; //Pointer to left node
  struct node *right; //Pointer to Right node
};

struct node *START;

void insert_last()
{
    struct node *temp,*t;
    int item;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter value for node: ");
    scanf("%d",&item);
    temp->data=item;
    if(START==NULL)
    {
        temp->right=NULL;
        temp->left=NULL;
        START=temp;
        printf("Node inserted at Address = %d and its value = %d",temp,item);
    }
    else
    {
        t=START;
        while(t->right!=NULL)
        {
            t=t->right;
        }
        t->right=temp;
        temp->left=t;
        temp->right=NULL;
        printf("Node inserted at Address = %d and its value = %d",temp,item);
    }
}

void main()
{
    int choice;
    printf("///Program for Double Linked-List///\n");
    printf("\nChoose an option from the following list\n");
    printf("\n========================================\n");
    printf("\n1. Insert a Node\n");
    printf("Anything else to exit!\n");
    printf("choice: ");
    scanf("%d",&choice);
    while(1)
    {
        switch(choice)
        {
            case 1:  insert_last();
                     break;
            default: printf("Exiting...\n\n");
                     printf("\t =================================\n");
                     printf("\t||Created by Jugal Kishore -- 2019||\n");
                     printf("\t =================================\n");
                     exit(0);
                     break;
        }
    }
}
