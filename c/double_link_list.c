#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* left; //Pointer to left node
  struct node* right; //Pointer to Right node
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
    struct node *temp, *t;
    temp=createnode();
    printf("Enter value for node: ");
    scanf("%d",temp->data);
    if(START==NULL)
    {
        START=temp;
        printf("Node inserted at Address = %d and its value = ",temp,temp->data);
    }
    else
    {
        t=START;
    }
}

int main()
{
    int choice;
    printf("** Menu Driven Program for Double Linked-List **\n");
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
            case 1: insert_begin();
                    break;
            default: printf("Exiting...\n\n");
                     printf("\t =================================\n");
                     printf("\t||Created by Jugal Kishore -- 2019||\n");
                     printf("\t =================================\n");
                     exit(0);
        }
    }
}
