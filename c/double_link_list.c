#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *left; //Pointer to left node
  struct node *right; //Pointer to Right node
};

struct node *START;

struct node *createnode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return n;
};

void insert_begin()
{
    struct node *temp;
    int item;
    temp=createnode();
    printf("\nEnter a value for a node: ");
    scanf("%d",&item);
    if(START=NULL)
    {
        temp->left=NULL;
        temp->right=NULL;
        temp->data=item;
        START=temp;
    }
}

void insert_last()
{
    struct node *temp,*t;
    int item;
    temp=createnode();
    printf("\nEnter value for node: ");
    scanf("%d",&item);
    temp->data=item;
    if(START==NULL)
    {
        temp->right=NULL;
        temp->left=NULL;
        START=temp;
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
    }
    printf("\nNode inserted at Address = %d and its value = %d",temp,item);
}

void main()
{
    int choice;
    printf("///Program for Double Linked-List///\n");
    while(1)
    {
        printf("\n\nChoose an option from the following list\n");
        printf("\n========================================\n");
        printf("\n1. Insert a Node\n");
        printf("\nAnything else to exit!\n");
        printf("\nchoice: ");
        scanf("%d",&choice);
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
