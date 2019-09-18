#include<stdio.h>

struct node
{
  int data;
  struct node* link;
};

struct node *START=NULL;
struct node* createnode()
{
  struct node *n;
  n=(struct node*)malloc(sizeof(struct node));
  return n;
}

void insertNode()
{
  struct node *temp *t;
  temp=createnode();
  printf("Enter a value: ");
  scanf("%d",&temp->data);
  temp->link=NULL;
  if(START==NULL)
  {
    START=temp;
    printf("Node is created at Address: %d and its value is: %d",temp,temp->data);
  }
  else
  {
    t=START;
    while(t->link!NULL)
    {
      t=t->link;
    }
    t->link=temp;
    printf("Node is created at Address: %d and its value is: %d",temp,temp->data);
  }
}

void deleteNode()
